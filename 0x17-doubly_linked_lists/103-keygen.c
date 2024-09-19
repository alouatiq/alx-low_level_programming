#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *generate_key(char *username)
{
    char *key;
    /* Your key generation algorithm here */
    key = malloc(strlen(username) + 1);
    if (key == NULL)
        return NULL;
    strcpy(key, username);
    /* Modify key based on the crackme5 algorithm */
    return key;
}

int main(int argc, char *argv[])
{
    char *key;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s username\n", argv[0]);
        return 1;
    }

    key = generate_key(argv[1]);
    if (key == NULL)
    {
        fprintf(stderr, "Failed to generate key\n");
        return 1;
    }

    printf("%s\n", key);
    free(key);

    return 0;
}
