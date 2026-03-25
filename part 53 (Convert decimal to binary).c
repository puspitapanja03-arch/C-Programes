/* Convert decimal to binary */

#include<stdio.h>
main()
{
int n,x[20],i,j;
printf("\n enter decimal no:");
scanf("%d",&n);
i=0;
while(n!=0)
{
x[i]=n%2;
i++;
n=n/2;
}
printf("\n binary:");
for(j=i-1;j>=0;j--)
printf("%d",x[j]);
}
