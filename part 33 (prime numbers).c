#include<stdio.h>
int prime(int n)
{
int i;
for (i=2;i<=n/2;i++)
{
if (n%i==0)
return (0);
}
return(1);
}
main()
{
int a,b;
printf("\n enter any nos:");
scanf("%d",&a);
b=prime(a);
if (b==1)
printf("\n prime");
else
printf("\n not prime");
}
