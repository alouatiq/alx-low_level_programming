#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str = "Dynamic Library";
	printf("Length: %d\n", _strlen(str));
	return 0;
}
