#include<stdio.h>
int rev(int n)
{
int a,s=0;
while (n!=0)
{
a=n%10;
s=s*10+a;
n=n/10;
}
return(s);
}
main()
{
int x,y;
printf("\n enter any nos:");
scanf("%d",&x);
y=rev(x);
printf("\n reverse=%d",y);
if(x==y)
printf("\n palindrome");
else
printf("\n not palindrome");
}
