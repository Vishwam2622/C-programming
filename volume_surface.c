#include <stdio.h>
#define pi 3.14
int main()
{
    float l,b,h,v,a;
    printf("Enter Length ");
    scanf("%f",&l);
    printf("Enter breadth ");
    scanf("%f",&b);
    printf("Enter height ");
    scanf("%f",&h);
    a=2*(l*b*+b*h+l*h);
    v=l*b*h;
    printf("\n Volume ===> %f",v);
    printf("\n Surface area ===> %f",a);
    return 0;

}