/* break -> terminate from loop */

#include<stdio.h>
main()
{
int a=1;
while (1)
{
printf("\n %d",a);
if (a==5)
break;
a++;
}
/* continue -> begin of loop */
int i;
for (i=1;i<=10;i++)
{
if (i%2==0)
continue;
printf("\n %d",i);
}
}
