#include <stdio.h>
#include "main.h"

int main(void) {
    char *haystack = "Hello World";
    char *needle = "World";
    char *result = _strstr(haystack, needle);

    if (result) {
        printf("Found substring: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
