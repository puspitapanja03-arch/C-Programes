/* TWIN PRIME */

#include<stdio.h>
int check (int n)
{
int i;
for (i=2;i<=n/2;i++)
{
if (n%i==0)
return (0);
}
return (1);
}
void twinprime (int n)
{
int a=3,j=1;
while (j<=n)
{
if (check(a)==1 && check(a+2)==1)
{
j++;
printf("\n %d %d",a,a+2);
}
a=(a+2);
}
}
main()
{
int n;
printf("\n enter n= ");
scanf("%d",&n);
twinprime(n);
}
