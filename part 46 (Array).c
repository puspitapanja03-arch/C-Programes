/* Input n number in an array and find max,min and average */

#include<stdio.h>
main()
{
int n,x[20],i,s,max,min;
float a;
printf("\n How many no:");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\n x[%d]=",i);
scanf("%d",&x[i]);
}
max=x[0];
min=x[0];
s=x[0];
for(i=1;i<n;i++)
{
s=s+x[i];
if (x[i]>max)
max=x[i];
if (x[i]<min)
min=x[i];
}
a=(float)s/(float)n;
printf("\n max=%d min=%d avg=%f",max,min,a);
}
