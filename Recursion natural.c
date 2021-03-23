#include<stdio.h>
int sum(int);
int main()
{
int n,s;
printf("enter a value of n:");
scanf("%d",&n);
s=sum(n);
printf("sum=%d",s);
}
int sum(int n)
{
if(n==1)
{
return 1;
}
else
{
return n+sum(n-1);
}
return 0;
}

