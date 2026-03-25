/* Armstrong number */
#include<stdio.h>
#include<math.h>
int count (int n)
{
int c=0;
while(n>0)
{
c++;
n=n/10;
}
return c;
}
int sum (int n)
{
int a,s=0,m;
double v;
m=count (n);
while (n!=0)
{
a=n%10;
v=pow (a,m);
s=s+v;
n=n/10;
}
return s;
}
/*
main ()
{
int p,q,i,j;
printf("\n enter any nos:");
scanf("%d",&p);
q=sum(p);
if (p==q)
printf("\n armstrong no");
else
printf("\n not armstrong");
}
*/
main()
{
int p,q,i,j;
printf("\n enter two nos:");
scanf("%d %d",&p,&q);
for (i=p;i<=q;i++)
{
j=sum (i);
if (j==i)
printf("\n armstrong no=%d",i);
}
}

