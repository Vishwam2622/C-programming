#include <stdio.h>
#include <conio.h>
int main ()
{
    float p,n;
    float si,r;
    
    printf("Enter Principal Amount");
    scanf("%f",&p);
    puts("Enter Rate Of Interst");
    scanf("%f",&r);
    puts("Enter Time Period");
    scanf("%f",&n);
    si=(p*r*n)/100;
    printf("Simple Interst = %f",si);
    getch();
    return 0;
}
