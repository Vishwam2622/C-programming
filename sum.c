#include<stdio.h>
int main()

{

int n, sum = 0, i, array[100];

printf(“Enter the number of integers to add: “);

scanf(“%d”, &n);

printf(“\n\nEnter %d integers \n\n”, n);

for(i = 0; i< n; i++)

{

scanf(“%d”, &array[i]);

sum += array[i]; // same as sum = sum + array[c]

}

printf(“\n\nSum = %d\n\n”, sum);

return 0;

}