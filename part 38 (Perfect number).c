/* perfect no checking */

#include<stdio.h>
int sumoffactor(int n)
{
int i,s=0;
for (i=1;i<=n/2;i++)
{
if (n%i==0)
s=s+i;
}
return s;
}
main()
{
int a,b,p,q;
printf("\n enter two nos:");
scanf("%d %d",&p,&q);
for (a=p;a<=q;a++)
{
b=sumoffactor(a);
if (b==a)
{
printf("\n perfect no=%d",a);
}
}
}
