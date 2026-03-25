#include<stdio.h>
main()
{
int a=5,b=7,c,d,e;
c=a&b;
printf("\n %d",c);
/* a-> 101
b->111
c->101
*/
d=a<<3;
printf("\n %d",d);
/* 0000 0000 0000 0101 */
/* 0000 0000 0010 1000 */
e=b>>2;
}
