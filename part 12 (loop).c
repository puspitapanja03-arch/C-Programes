/* s=1+3+5+7+9....nth term */

#include<stdio.h>
main()
{
int a,n,s;
printf("\n enter any no?");
scanf("%d",&n);
s=0;
a=1;
do
{
s=s+a;
printf("\n %d",a);
a+=2;
}
while (a<=2*n-1);
printf("\n sum=%d",s);
}
