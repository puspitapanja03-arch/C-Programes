#include<stdio.h>
void main ()
{
int a,b,c;
printf("\n enter two nos:");
scanf("%d %d", &a,&b);
c=a+b;
printf("\n sum=%d",c);
if(a>b)
{
printf("\n max=%d",a);
}
else
{
printf("\n max=%d",b);
}
}
