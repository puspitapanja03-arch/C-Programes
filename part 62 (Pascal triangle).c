#include<stdio.h>
main()
{
static int i,j,n,x[10][10];
printf("\n enter line nos:=");
scanf("%d",&n);
x[0][0]=1;
for(i=0;i<n;i++)
{
x[i][0]=1;
for(j=1;j<=i;j++)
{
x[i][j]=x[i-1][j-1]+x[i-1][j];
}
}
printf("\n result=\n");
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("%2d",x[i][j]);
}
printf("\n");
}
}
