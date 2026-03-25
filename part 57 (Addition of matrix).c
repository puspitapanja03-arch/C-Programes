/* Addition of matrix */

#include<stdio.h>
main()
{
int x[10][10],y[10][10],z[10][10],i,j,r,c;
printf("\n How many row and col:");
scanf("%d %d",&r,&c);
printf("\n matrix 1 \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n x[%d][%d]=",i,j);
scanf("%d",&x[i][j]);
}
}
printf("\n matrix 2 \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n y[%d][%d]=",i,j);
scanf("%d",&y[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
z[i][j]=x[i][j]+y[i][j];
}
}
printf("\n matrix addition \n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%5d",z[i][j]);
}
printf("\n");
}
}
