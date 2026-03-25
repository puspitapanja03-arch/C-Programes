/* Transpose matrix */

#include<stdio.h>
main()
{
int x[10][10],y[10][10],i,j,r,c;
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
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
y[j][i]=x[i][j];
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
printf("\n transpose matrix \n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%5d",y[i][j]);
}
printf("\n");
}
}
