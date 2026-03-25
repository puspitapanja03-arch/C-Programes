/*
RECURSION
PUSH pop
INSERT DELETE
stack-linear data structure
LIFO-LAST IN FIRST OUT
*/

#include<stdio.h>
int fibo(int n)
{
if (n==1)
return (0);
else if (n==2)
return (1);
else
return fibo (n-1)+fibo (n-2);
}
void main()
{
int p,n;
printf("\n enter any no=");
scanf("%d",&n);
p=fibo (n);
printf("\n no=%d",p);
}
