/* Store 10 number in an array and separate prime and composite in two other array */

#include<stdio.h>
int prime(int n)
{
int i;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
return(0);
}
return(10);
}
main()
{
int i,j,k,y[20],z[20],g,n=10;
int x[]={10,15,19,21,23,19,102,113,29,70};
j=0;
k=0;
for(i=0;i<n;i++)
{
g=prime(x[i]);
if(g==1)
{
y[j]=x[i];
j++;
}
else
{
z[k]=x[i];
k++;
}
}
printf("\n prime:");
for(i=0;i<j;i++)
printf("\t %d",y[i]);
printf("\n composite:");
for(i=0;i<k;i++)
printf("\t %d",z[i]);
}
