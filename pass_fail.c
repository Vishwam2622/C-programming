#include <stdio.h>
int main()
{
    float a;
    printf("Enter Marks From 0-50  ");
    scanf("%f",&a);
    if(a<=20)
    {
        printf("Fail");
    }
    else
    {
        printf("Pass");
    }
    return 0;
}