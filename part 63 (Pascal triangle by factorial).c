/* Pascal triangle by factorial */

#include<stdio.h>
long factorial(int n)
{
int i;
long f=1;
for(i=1;i<=n;i++)
f=f*i;
return f;
}
int main()
{
int r,n,c;
printf("\n Enter the number of rows:");
scanf("%d",&n);
for(r=0;r<n;r++)
{
for(c=0;c<n-r;c++)
printf(" ");
for(c=0;c<=r;c++)
printf("%1d",factorial(r)/factorial(c)*factorial(r-c));
printf("\n");
}
return 0;
}
