#include<stdio.h>
int sumofdigit(int n)
{
int a,s=0;
while(n!=0)
{
a=n%10;
s=s+a;
n=n/10;
}
return(s);
}
main()
{
int x,y;
printf("\n enter any no:");
scanf("%d",&x);
y=sumofdigit(x);
printf("\n sum of digit=%d",y);
}
