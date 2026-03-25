#include<stdio.h>
void read(int m[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n m[%d][%d]=",i,j);
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
printf("%4d",m[i][j]);
}
printf("\n");
}
}
void add(int x[10][10],int y[10][10],int z[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
z[i][j]=x[i][j]+y[i][j];
}
}
}
main()
{
int x[10][10],y[10][10],z[10][10],r,c;
printf("\n How many row and col:");
scanf("%d %d",&r,&c);
printf("\n matrix 1 \n");
read(x,r,c);
printf("\n matrix 2 \n");
read(y,r,c);
add(x,y,z,r,c);
printf("\n matrix 1 \n");
disp(x,r,c);
printf("\n matrix 2 \n");
disp(y,r,c);
printf("\n resultant matrix \n");
disp(z,r,c);
}
