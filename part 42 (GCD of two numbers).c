/*
RECURSION
PUSH pop
INSERT DELETE
stack-linear data structure
LIFO-LAST IN FIRST OUT
*/

#include<stdio.h>
int gcd (int a,int b)
{
if (b==0)
return (a);
else
return gcd (b,a%b);
}
void main()
{
int x,y,z;
printf("\n enter two nos:");
scanf("%d %d",&x,&y);
z=gcd(x,y);
printf("\n gcd=%d",z);
}
