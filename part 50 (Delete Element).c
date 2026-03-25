/* Delete an element in an array */

#include<stdio.h>
void main()
{
int n,x[20],i,j,d,k;
printf("\n how many no:");
scanf("%d",&n);
printf("\n enter nos:\n");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
printf("\n no to be deleted:");
scanf("%d",&d);
for(i=0;i<n;i++)
{
if(x[i]==d)
{
for(j=i;j<n-1;j++)
{
x[j]=x[j+1];
}
n--;
i--;
}
}
for(i=0;i<n;i++)
{
printf("%5d",x[i]);
}
}

