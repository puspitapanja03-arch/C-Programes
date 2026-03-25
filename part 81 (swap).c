#include<stdio.h>
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
}
void swapp(int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
}
main()
{
int x=10,y=20;
swap(x,y); /* call by value */
printf("\n x=%d y=%d",x,y);
swapp(&x,&y); /* call by references */
printf("\n x=%d y=%d",x,y);
}
