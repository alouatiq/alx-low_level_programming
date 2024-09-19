#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *generate_key(char *username)
{
	static char key[7];
	int username_len;

	username_len = strlen(username);

	/* This is a placeholder algorithm. Replace with the
 	* actual algorithm after analyzing crackme5 */
	key[0] = username[0] + username_len;
	key[1] = 'A' + (username_len % 26);
	key[2] = '0' + (username_len % 10);
	key[3] = username[username_len - 1] - 2;
	key[4] = '@' + username_len;
	key[5] = username[0] - username_len;
	key[6] = '\0';

	return (key);
}

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
