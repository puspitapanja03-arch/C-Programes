#include<stdio.h>
/* 1. Memory allocate foir all members
2. all member accessible */

struct num
{
int a;
float b;
char c;
};
/* 1. Memory allocate for maximum size of members
2. any one member accessible */
union numb
{
int a;
float b;
char c;
};
main()
{
struct num x;
union numb y;
printf("\n size=%d",sizeof(x));/*........|.......|....*/
x.a=10;
x.b=12.5;
x.c='a';
printf("\n %d %f %c \n",x.a,x.b,x.c);
printf("\n size=%d",sizeof(y));/*......*/
y.a=10;
printf("\n %d \n",y.a);
enum dept{sales,purchase=10,acet,tech};
printf("\n %d",acet);
}
