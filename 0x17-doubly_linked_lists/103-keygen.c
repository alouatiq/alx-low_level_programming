#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long f1(unsigned long x, unsigned int y)
{
    return ((x << y) | (x >> (32 - y))) & 0xFFFFFFFF;
}

unsigned long f2(unsigned long x, unsigned long y)
{
    unsigned long result = ((x + y) & 0xFFFFFFFF);
    return (result ^ 0x55) & 0xFFFFFFFF;
}

char *generate_key(char *username)
{
    static char key[7];
    unsigned long s[4] = {0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432, 0x74767a5835737956};
    unsigned int x, y, z;
    unsigned long sum = 0;
    unsigned int username_len = strlen(username);

    for (x = 0; x < username_len; ++x)
    {
        sum += username[x];
    }

    x = ((char *)s)[sum & 63];
    y = ((char *)s)[(sum >> 2) & 63];
    z = ((char *)s)[(sum >> 4) & 63];

    key[0] = x;
    key[1] = y;
    key[2] = z;

    sum = f1(sum, 6);
    sum = f2(sum, 0x5ecc);

    key[3] = ((char *)s)[sum & 63];
    key[4] = ((char *)s)[(sum >> 2) & 63];
    key[5] = ((char *)s)[(sum >> 4) & 63];
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
