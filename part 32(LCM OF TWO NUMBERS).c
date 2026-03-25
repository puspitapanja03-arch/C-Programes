/* LCM OF TWO NUMBERS */

#include<stdio.h>
int1cm(int,int);
int1cm(int a,int b)
{
int c,i;
c=a;
i=2;
while (c%b!=0)
{
c=a*i;
i++;
}
return c;
}
void main()
{
int x,y,z;
printf("\n enter two nos:");
scanf("%d %d",&x,&y);
z=1; (x,y);
printf("\n 1 cm=%d",z);
}
