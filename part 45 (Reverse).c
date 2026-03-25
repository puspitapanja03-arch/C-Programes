/*
RECURSION
PUSH pop
INSERT DELETE
stack-linear data structure
LIFO-LAST IN FIRST OUT
*/

#include<stdio.h>
#include<conio.h>
int rev (int,int);
int rev (int n,int r)
{
if (n==0)
return r;
else
return(rev(n/10,r*10+n%10));
}
void main()
{
 int n,b;
 printf("\n enter the no:");
 scanf("%d",&n);
 b=rev(n,0);
 printf("\n reverse=%d",b);
}
