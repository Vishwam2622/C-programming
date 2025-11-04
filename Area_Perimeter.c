#include<stdio.h>
#include <conio.h>
int main()
{
    float l,b,a,p;
    printf("Enter Length And Breadth = ");
    scanf("%f%f",&l,&b);
    a=l*b;
    printf("Area = %g",a);
    p=(2*(l+b));
    printf("\nPerimeter = %g",p);
    getch();
    return 0;
}