#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_key - Generates a key based on the username
 * @username: The input username
 *
 * Return: A pointer to the generated key
 */
char *generate_key(char *username)
{
	static char key[7];
	int i, username_len;
	unsigned long sum = 0;

	username_len = strlen(username);

	for (i = 0; i < username_len; i++)
	{
		sum += username[i];
	}

	srand(sum ^ 0x1234);

	for (i = 0; i < 6; i++)
	{
		key[i] = rand() % 26 + 'A';
	}
	key[6] = '\0';

	return (key);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}

	printf("%s\n", generate_key(argv[1]));
	return (0);
}
