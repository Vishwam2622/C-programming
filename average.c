#include <stdio.h>
int main() {

int N, i;

float number, sum = 0.0, average;

printf(“Enter the number of elements: “);

scanf(“%d”, &N);

// Prompt user to enter N numbers

printf(“Enter %d numbers:\n”, N);

for (i = 0; i < N; i++) {

scanf(“%f”, &number);

sum += number; // Add each number to the sum

}

// Calculate average

if (N > 0) {

average = sum / N;

printf(“Average of the entered numbers = %.2f\n”, average);

} else {

printf(“Cannot calculate average. Number of elements should be greater than zero.\n”);

}

return 0;

}