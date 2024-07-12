#!/bin/bash

# List of function prototypes
functions=(
    "_putchar char c"
    "_islower int c"
    "_isalpha int c"
    "_abs int n"
    "_isupper int c"
    "_isdigit int c"
    "_strlen char *s"
    "_puts char *s"
    "_strcpy char *dest, char *src"
    "_atoi char *s"
    "_strcat char *dest, char *src"
    "_strncat char *dest, char *src, int n"
    "_strncpy char *dest, char *src, int n"
    "_strcmp char *s1, char *s2"
    "_memset char *s, char b, unsigned int n"
    "_memcpy char *dest, char *src, unsigned int n"
    "_strchr char *s, char c"
    "_strspn char *s, char *accept"
    "_strpbrk char *s, char *accept"
    "_strstr char *haystack, char *needle"
)

# Create each .c file with the corresponding function prototype
for func in "${functions[@]}"; do
    IFS=' ' read -r name args <<<"$func"
    printf '#include "main.h"\n\nint %s(%s)\n{\n    // TODO: Implement this function\n    return 0;\n}\n' "$name" "$args" > "${name}.c"
done
