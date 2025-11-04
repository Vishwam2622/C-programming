#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter values to be Exchanged");
    printf("\na = ");
    scanf("%d",&a);
    
    printf("\nb = ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Exchanged values are :");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    return 0;


    

}