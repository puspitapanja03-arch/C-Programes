/* s=1+2+4+7+11+....nth term */

#include<stdio.h>
main()
{
int a,b,n,s;
printf("\n enter term=");
scanf("%d",&n);
s=0;
a=1;
for (b=1;b<=n;b++)
{
s=s+a;
printf("%d \n",a);
a=a+b;
}
printf("\n sum=%d",s);
}
