/* factorial of n(s=1*2*3*4*.....n) */

#include<stdio.h>
void main ()
{
int n,a,s;
printf("\n enter any no:");
scanf("%d",&n);
s=1;
for(a=1;a<n;a++)
{
s=s*a;
printf("\t %d \n",a);
}
printf("\n factorial=%d",s);
}
