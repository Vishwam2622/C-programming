#include<stdio.h>
int main()
{
    char i;
    char a[10] = {'A','E','I','O','U','a','e','i','o','u'};
    printf("Enter Any Alphabet = ");
    scanf("%c",&i);
    if(i==a[0] || i==a[1] || i==a[2] || i==a[4] || i==a[3] || i==a[5] || i==a[6] || i==a[7] || i==a[8] || i==a[9])
    {
        printf("Yes It Is A Vowel ");
    }
    else{
        printf("Sorry It Is Not A Vowel");
    }
    return 0;

}