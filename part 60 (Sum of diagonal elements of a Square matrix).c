/* Diagonal element sum of square matrix */

#include<stdio.h>
main()
{
int x[10][10],i,j,r,c,sum=0;
printf("\n How many row and col:");
scanf("%d %d",&r,&c);
printf("\n matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n x[%d][%d]=",i,j);
scanf("%d",&x[i][j]);
}
}
printf("\n matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",x[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
printf("%3d",x[i][j]);
else
printf(" ");
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i+j==r-1)
printf("%3d",x[i][j]);
else
printf(" ");
}
printf("\n");
}
j=c-1;
sum=0;
for(i=0;i<r;i++)
{
sum=sum+x[i][j];
if(i!=j)
{
sum=sum+x[i][j];
}
j--;
}
printf("\n sum=%d",sum);
}
