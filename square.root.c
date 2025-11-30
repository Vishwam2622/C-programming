#include<stdio.h>
#include <math.h>
double sr(double y)
   {
double x =sqrt(y);
return x;
   }  

 int main()
 {
    int x;
 printf("Enter any number");
 scanf("%d",&x);
 double res=sr(x);
 printf("Squareroot =%lf",res);
 return 0;
 }

