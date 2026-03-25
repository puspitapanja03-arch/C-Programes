/* macro */
#include<stdio.h>
#define pi 3.141
#define max(a,b) a>b?a:b
/*?: ternary operator */
main()
{
float a,r=2.5;
int p=100,q=200,z;
a=pi*r*r;
printf("\n area=%f",a);
z=max(p,q);
printf("\n %d",z);
}
