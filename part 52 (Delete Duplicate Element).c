/* delete duplicate element in an array */

#include<stdio.h>
main()
{
int x[20],n,i,j,k;
printf("\n How many no?");
scanf("%d",&n);
printf("\n enter nos:\n");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
for(k=i+1;k<n;k++)
{
if(x[i]==x[k])
{
for(j=k;j<n-1;j++)
{
x[j]=x[j+1];
}
n--;
k--;
}
}
}
for(i=0;i<n;i++)
{
printf("\n %d",x[i]);
}
}
