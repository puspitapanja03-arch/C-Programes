/*
   1
  2 2
 3 3 3
4 4 4 4
*/

#include<stdio.h>
main()
{
int n,i,j,k;
printf("\n enter line no:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
for (k=1;k<=n-i;k++)
{
printf(" ");
}
for (j=1;j<=i;j++)
{
printf("%2d",i);
}
printf("\n");
}
}
