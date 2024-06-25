#include <stdio.h>

int main() {
int count = 2; // Start from the third number (index 2)
long long a = 1, b = 2; // First two Fibonacci numbers, using long long to handle larger numbers

// Print the first two Fibonacci numbers
printf("%lld, %lld, ", a, b);

while (count < 104) { // We want to print 104 numbers in total
long long next = a + b;
printf("%lld", next);

// Print ", " if not the last number
if (count != 103) {
printf(", ");
} else {
printf("\n"); // Print new line at the end
}

// Update variables for next iteration
a = b;
b = next;
count++;
}

return (0);
}
