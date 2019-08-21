#include<stdio.h>
int fact(int);

int main()
{
int a,b,c;
printf("enter a no..\n");
scanf("%d",&a);
b = fact(a);
printf("the fact no is %d ",b);
return 0;
}
int fact(int n)
{
int fac=1;
if (n==0)
return 1;
else 
return (n*fact(n-1));
}
