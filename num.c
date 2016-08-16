#include<stdio.h>
int main()  
{ 
int n;
printf("enter n value");
scanf("%d",&n);
if(n>0)
printf("given number is a positive number");
else if(n<0)
printf("given number is a negative number");
else
printf("given number is zero");
}
