/*
1. Factorial
2. Power
3. Exit
*/

#include<stdio.h>
main()
{
int a,b,c,n,s,i;
do
{
printf("\n 1.factorial\n 2.power\n 3.exit");
printf("\n enter your choice?");
scanf("%d",&s);
switch(s)
{
case 1:
printf("\n enter any no:");
scanf("%d",&n);
c=1;
for(a=1;a<=n;a++)
{
c=c*a;
printf("\t %d \n",a);
}
printf("\n factorial=%d",c);
break;
case 2:
printf("\n enter two nos:");
scanf("%d %d",&a,&b);
c=1;
for (i=1;i<=b;i++)
c=c*a;
printf("\n power=%d",c);
break;
case 3:
printf("\n bye");
break;
default:
printf("\n invalid input");
}
}
while(s!=3);
}
