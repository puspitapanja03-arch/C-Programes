/* MERGE TWO SORTED ARRAY */

#include<stdio.h>
void merge(int x[20],int y[20],int z[40],int m,int n)
{
int i=0,j=0,k=0;
while(i<m && j<n)
{
if(x[i]<y[j])
{
z[k]=x[i];
i++;
}
else
{
z[k]=y[j];
j++;
}
k++;
}
while(i<m)
{
z[k]=x[i];
i++;
k++;
}
while(j<n)
{
z[k]=y[j];
j++;
k++;
}
}
void main()
{
int x[20],y[20],z[40],m,n,i,j;
printf("\n enter length of 1st list?");
scanf("%d",&m);
for(i=0;i<m;i++)
{
printf("\n x[%d]=",i);
scanf("%d",&x[i]);
}
printf("\n enter length of 2nd list?");
scanf("%d",&n);
for(j=0;j<n;j++)
{
printf("\n y[%d]=",j);
scanf("%d",&y[j]);
}
merge(x,y,z,m,n);
printf("\n sorted list:\n");
for(i=0;i<m+n;i++)
{
printf("%d \t",z[i]);
}
}
