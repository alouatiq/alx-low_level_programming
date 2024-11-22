#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;

    // Debugging: Check memory layout
    printf("Address of p: %p\n", (void *)p);
    printf("Address of a[0]: %p\n", (void *)&a[0]);
    printf("Address of a[2]: %p\n", (void *)&a[2]);

    *(p + ((char *)&a[2] - (char *)p) / sizeof(int)) = 98;

    printf("a[2] = %d\n", a[2]);
    return (0);
}
