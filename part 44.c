/*
RECURSION
PUSH pop
INSERT DELETE
stack-linear data structure
LIFO-LAST IN FIRST OUT
*/

#include<stdio.h>
int sum (int n)
{
if (n==1)
return 1;
else
return (n+sum(n-1));
}
void main()
{
int a,b;
printf("\n enter the nos:");
scanf("%d",&a);
b=sum (a);
printf("\n sum=%d",b);
}
