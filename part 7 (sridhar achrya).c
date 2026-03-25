#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,x1,x2,d;
printf("\n enter a,b,c:\n");
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
if (d>=0)
{
x1=(-b+sqrt(d))/(2*a);
x2=(-d-sqrt(d))/(2*a);
printf("\n roots are %f and %f",x1,x2);
}
else
{
printf("\n roots are imaginary");
}
}
