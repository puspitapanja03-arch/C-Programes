#include<stdio.h>
int gcd(int,int);
int gcd(int a,int b)
{
int c;
c=a%b;
while (c!=0)
{
a=b;
b=c;
c=a%b;
}
return(b);
}
main()
{
int x,y,z;
printf("\n enter two nos:");
scanf("%d %d",&x,&y);
z=gcd(x,y);
printf("\n gcd=%d",z);
}
