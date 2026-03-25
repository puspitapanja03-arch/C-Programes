/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1
*/

#include<stdio.h>
main()
{
int n,i,j,k,x;
printf("\n enter line no:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
for (k=1;k<=n-i;k++)
printf(" ");
x=1;
for (j=1;j<=2*i-1;j++)
{
printf("%d",x);
if (j<i)
x++;
else
x--;
}
printf("\n");
}
for (i=n-1;i>=1;i--)
{
for (k=1;k<=n-i;k++)
printf(" ");
x=1;
for (j=1;j<=2*i-1;j++)
{
printf("%d",x);
if (j<i)
x++;
else
x--;
}
printf("\n");
}
}
