#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * print_error - Prints an error message to stderr and exits.
 * @msg: The error message to print.
 */
void print_error(const char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(98);
}

/**
 * main - Displays the information contained in the ELF header at the start
 *        of an ELF file.
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
    {
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        print_error("Error: Can't read file");
    }

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

    printf("ELF Header:\n");
    // Print header information like Magic, Class, Data, etc.

    close(fd);
    return (0);
}
