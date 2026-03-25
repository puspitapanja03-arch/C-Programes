/* s=x+x^2/2+x^3/3+x^4/4....nth term */

#include<stdio.h>
main()
{
float n,a,s,t,x;
printf("\n enter n and x:");
scanf("%f %f",&n,&x);
t=x;
s=0;
a=1;
while(a<=n)
{
s=s+t/a;
printf("%f \n",t/a);
t=t*x;
a++;
}
printf("\n sum=%f",s);
}
