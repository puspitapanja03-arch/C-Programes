/*
1
2 3
4 5 6
7 8 9 0
*/

#include<stdio.h>
main()
{
int n,i,j,a=1;
printf("\n enter line no:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
for (j=1;j<=i;j++)
{
printf("%d",a%10);
a++;
}
printf("\n");
}
}
