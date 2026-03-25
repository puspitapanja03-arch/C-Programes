/*spy number checking */

#include<stdio.h>
int spynumber(int n)
{
int d,s=0,p=1;
while (n>0)
{
d=n%10;
s=s+d;
p=p*d;
n=n/10;
}
if (s==p)
return 1;
else
return 0;
}
main ()
{
int n,k;
printf("\n enter n=");
scanf("%d",&n);
k=spynumber(n);
if (k==1)
printf("\n spy number");
else
printf("\n not spy number");
}
