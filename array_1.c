#include <stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d  ",*(i+a));
    }
    return 0;
}