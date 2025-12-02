#include<stdio.h>

int main()
    {
        int i,j,r,c;
        int m1[50][50];
        printf("Enter thr rows And columns Of matrix \n");
        scanf("%d%d",&r,&c);
        puts("Enter Matrix");
        for (i = 0; i<r; i++)
        for(j=0;j<c;j++)
        scanf("%d",&m1[i][j]);
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d",m1[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
