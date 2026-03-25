/* s=1+x+x^2/2!+x^3/3!+x^4/4!.....nth term */

#include<stdio.h>
main()
{
float n,x,s,t,a;
printf("\n enter n and x:");
scanf("%f %f",&n,&x);
t=x;
s=1;
a=2;
while (a<=n)
{
s=s+t;
printf("%f \n",t);
t=t*x/a;
a++;
}
printf("\n sum=%f",s);
}
