/* s=1^2+2^2+3^2+4^2+.....nth term */

#include<stdio.h>
main()
{
int a,n,s;
printf("\n enter any no:");
scanf("%d",&n);
s=0;
a=1;
do
{
s=s+a*a;
printf("\n %d",a*a);
a++;
}
while(a<=n);
printf("\n sum=%d",s);
}
