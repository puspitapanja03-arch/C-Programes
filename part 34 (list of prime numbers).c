#include<stdio.h>
int prime(int n)
{
int i;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
return(0);
}
return(1);
}
main()
{
int a,b,p,q;
printf("\n enter two nos:");
scanf("%d %d",&p,&q);
for (a=p;a<=q;a++)
{
b=prime(a);
if (b==1)
{
printf("\t %d",a);
}
}
}
