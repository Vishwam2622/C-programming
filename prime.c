 #include <stdio.h>
    int main() {
       int a,b;
       printf("Enter any number  ");
       scanf("%d",&a);
       if(a==2)
       {
        printf("It is a prime number");

       }
       else if(a%2==0)
       {
        printf("It is not a prime number");
       }
       else{
        printf("It is a prime number");
       }

       return 0;
    }