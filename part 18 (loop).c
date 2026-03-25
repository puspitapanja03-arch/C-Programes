/* s=x-x^3/3!+x^5/5!-x^7/7!+.....nth term */

#include<stdio.h>
main()
{
float n,s,x,t,a;
printf("\n enter n and x:");
scanf("%f %f",&n,&x);
t=x;
s=0;
for (a=1;a<=n;a++)
{
s=s+t;
printf("%f \n",t);
t=t*(x*x)/((2*a)*(2*a+1))*(-1);
}
printf("\n sum=%f",s);
}
