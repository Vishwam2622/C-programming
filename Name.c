#include<stdio.h>
int main()
{
    char str[34];

    printf("Enter Your Name ");
scanf("%[^\n]" , str);
printf("Hello %s",str);
}