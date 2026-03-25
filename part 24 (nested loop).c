/*
   A
  B B
 C C C
D D D D
*/

#include<stdio.h>
main()
{
int n,i,j,k,x=65;
printf("\n enter line no:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
for (k=1;k<=n-i;k++)
printf(" ");
for (j=1;j<=i;j++)
printf("%2c",x);
x++;
printf("\n");
}
}
