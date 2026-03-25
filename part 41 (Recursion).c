/*
RECURSION-FUNCTION CALL BY ITSELF
factorial (5)
PUSH POP
INSERT DELETE
|2*factorial(1)|
|3*factorial(2)|
|4*factorial(3)|
|5*factorial(4)|
----------------
stack-linear data structure
LIFO-LAST IN FIRST OUT
*/

#include<stdio.h>
int factorial (int n)
{
if(n==0||n==1)
return 1;
else
return (n*factorial(n-1));
}
void main()
{
int a,b;
printf("\n enter the no:");
scanf("%d",&a);
b=factorial(a);
printf("\n factorial=%d",b);
}
