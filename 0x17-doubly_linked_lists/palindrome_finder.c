#include <stdio.h>

int is_palindrome(int n) {
	int reversed = 0, original = n;
	while (n != 0) {
	reversed = reversed * 10 + n % 10;
	n /= 10;
	}
	return original == reversed;
}

int main() {
	int largest_palindrome = 0;
	int i, j;
	FILE *file;

	for (i = 999; i >= 100; i--) {
	for (j = i; j >= 100; j--) {
	int product = i * j;
	if (product > largest_palindrome && is_palindrome(product)) {
	largest_palindrome = product;
	}
	}
	}

	printf("%d\n", largest_palindrome);

	file = fopen("102-result", "w");
	if (file != NULL) {
	fprintf(file, "%d", largest_palindrome);
	fclose(file);
	}

	return 0;
}
