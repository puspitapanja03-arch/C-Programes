/* matrix symmetric or not */

#include<stdio.h>
int symmetric (int m[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(m[i][j]!=m[j][i])
{
return 0;
}
}
}
return 1;
}
main()
{
int x[10][10],r,c,k,i,j;
printf("\n How many row and col:");
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n m[%d][%d]=",i,j);
scanf("%d",&x[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",x[i][j]);
}
printf("\n");
}
k=symmetric(x,r,c);
if(k==1)
printf("\n symmetric");
else
printf("\n not symmetric");
}
