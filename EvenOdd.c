#include<stdio.h>
int main()
{
    int a;
    printf("Enter Any Number To Check Even Or Odd  ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("The Number Is Zero");

    }
    else if(a%2==0)
    {
        printf("The Number Is Even");

    }
    else{
        printf("The Number Is Odd");
    }
return 0;
}