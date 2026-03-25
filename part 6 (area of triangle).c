/* area of triangle */

#include<stdio.h>
void main()
{
float a,b,c,s,x;
printf("\n enter three sides:\n");
scanf("%f %f %f",&a,&b,&c);
if (a+b>c&&b+c>a&&c+a>b)
{
s=(a+b+c)/2;
x=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n area=%f",x);
}
else
{
printf("\n not possible");
}
}

