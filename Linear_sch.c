#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60};
    int n,i;
    printf("Enter number to be searched  ",n);
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(n==a[i])
        {
            printf("The Number Is At Location  %d",i);
        }

    }
    return 0;
}
