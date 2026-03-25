#include<stdio.h>
#include"z.h"
void fx()
{
auto int a=0;
a++;
printf("\n %d",a);
}
void gx()
{
static int a;
a++;
printf("\n %d",a);
}
main()
{
extern int u;
printf("\n u=%d",u);
fx();
fx();
fx();

gx();
gx();
gx();
}
