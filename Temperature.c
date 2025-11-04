#include <stdio.h>
#include <conio.h>
int main()
{
    float temp,fah,cel;
    int choice;
    printf("Enter the temperature in:");
    printf("\n1.Faherenheit");
    printf("\n2.Celcius");
    scanf("%d",&choice);
    printf("Enter Temperature = ");
    scanf("%f",&temp);

   
    switch (choice)
    {
        case 1:
        printf("Enter Temperature = ");
   
        printf("\nTemperature in Celcius = %g",5/9 * (temp - 32));
        break;

        case 2:
        printf("Enter Temperature = ");
    ;
        printf("\nTemperature in Fahrenheit = %g",9/5*temp+32);
        break;
        default:
        printf("Invalid Input");
        return 0;


    }



}