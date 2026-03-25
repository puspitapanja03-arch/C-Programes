/* Column wise sorting of matrix */

#include<stdio.h>
void read (int m[10][10],int r,int c)
{
int i,j;
printf("\n mat:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n x[%d][%d]=",i,j);
scanf("%d",&m[i][j]);
}
}
}
void disp(int m[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%5d",m[i][j]);
}
printf("\n");
}
}
void main()
{
int x[10][10],i,j,r,c,k,t;
printf("\n Enter row and col of mat:");
scanf("%d %d",&r,&c);
read (x,r,c);
printf("\n mat:\n");
disp(x,r,c);
for(k=0;k<c;k++)
{
for(i=0;i<r-1;i++)
{
for(j=0;j<r-1-i;j++)
{
if(x[j][k]>x[j+1][k])
{
t=x[j][k];
x[j][k]=x[j+1][k];
x[j+1][k]=t;
}
}
}
}
printf("\n mat:\n");
disp(x,r,c);
}
