/* Insert an element in an array */

#include<stdio.h>
void main()
{
int n,x[20],i,d,m,j;
printf("\n How many no:");
scanf("%d",&n);
printf("\n enter nos:");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
printf("\n enter new no and after which no to be inserted?");
scanf("%d %d",&d,&m);
for(i=0;i<n;i++)
{
if(x[i]==m)
{
for(j=n-1;j>=i+1;j--)
{
x[j+1]=x[j];
}
x[i+1]=d;
n++;
break;
}
}
for(i=0;i<n;i++)
{
printf("%5d",x[i]);
}
}
