#include<stdio.h>
int main()
{
    char s;
    char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    printf("Enter Any alphabet  ");
    scanf("%c",&s);
    if(s==a[0])
    {
        printf("nothing in left");
        printf("\n Right Alphabet ===> %c",a[1]);

    }
    else if(s==a[25])
    {
        printf("Left Alphabet ===> %c",a[24]);
        printf("\nNothing in right");
    
    }
    else{
        printf("\nLeft alphabet ===> %c",a[s-'A'-1]);
        printf("\nRight alphabet ===> %c",a[s-'A'+1]);
    }
    return 0;

    }
