#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * print_error - Prints an error message to stderr and exits with status 98.
 * @msg: The error message to print.
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Prints the ELF header information in the correct format.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");

	/* Magic */
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", header->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');

	/* Class */
	printf("  Class:                             %s\n",
		header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
		header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "Invalid class");

	/* Data */
	printf("  Data:                              %s\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
		header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid data encoding");

	/* Version */
	printf("  Version:                           %d\n", header->e_ident[EI_VERSION]);

	/* OS/ABI */
	printf("  OS/ABI:                            %s\n",
		header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
		header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
		header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
		"<unknown>");

	/* ABI Version */
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	/* Type */
	printf("  Type:                              %s\n",
		header->e_type == ET_EXEC ? "EXEC (Executable file)" :
		header->e_type == ET_DYN ? "DYN (Shared object file)" :
		header->e_type == ET_REL ? "REL (Relocatable file)" : "Unknown");

	/* Entry point address */
	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Displays the information contained in the ELF header of an ELF file.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 on success, or 98 on error.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t read_bytes;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Can't read file");

	read_bytes = read(fd, &header, sizeof(header));
	if (read_bytes == -1 || read_bytes != sizeof(header))
	{
		close(fd);
		print_error("Error: Can't read file");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		print_error("Error: Not an ELF file");
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
