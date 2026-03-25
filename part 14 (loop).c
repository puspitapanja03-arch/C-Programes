/* s=0+1+1+2+3+5+8+.....nth term */

#include<stdio.h>
main()
{
int a,n,s,b,c,i;
printf("\n enter term=");
scanf("%d",&n);
a=0;
b=1;
s=1;
printf("%d \n %d \n",a,b);
for (i=1; i<=n-2; i++)
{
c=a+b;
printf("%d \n",c);
s=s+c;
a=b;
b=c;
}
printf("\n sum=%d",s);
}
