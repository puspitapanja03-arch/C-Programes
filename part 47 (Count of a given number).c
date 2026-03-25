/* Count a given number in an array */

#include<stdio.h>
int freq(int a[20],int m,int b)
{
int i,c=0;
for(i=0;i<m;i++)
{
if(a[i]==b)
c++;
}
return c;
}
main()
{
int x[20],n,i,d,k;
printf("\n How many no?");
scanf("%d",&n);
printf("\n enter nos:\n");
for (i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
printf("\n find what?");
scanf("%d",&d);
k=freq(x,n,d);
printf("\n count=%d",k);
}
