/* factorial of n(s=1*2*3*4*....*n) */

#include<stdio.h>
int factorial (int);  /* DECLARATION */
int factorial (int n) /* DEFINE */
{
int s,a;
s=1;
for (a=1;a<=n;a++)
{
s=s*a;
}
return s;
}
void main()
{
int p,q;
printf("\n enter any no:");
scanf("%d",&p);
q=factorial(p); /* CALL BY VALUE */
printf("\n factorial=%d \n",q);
}
