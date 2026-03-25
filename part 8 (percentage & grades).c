/* input 4 marks and calculate per and grade */

#include<stdio.h>
void main()
{
int a,b,c,d;
float p,t;
printf("\n enter four marks:");
scanf("%d %d %d %d",&a,&b,&c,&d);
t=a+b+c+d;
p=t/4;
printf("\n total=%.2f",t);
printf("\n per=%.2f",p);
if(p>80)
printf("\n grade a+");
else if (p>70)
printf("\n grade a");
else if (p>60)
printf("\n grade b");
else if (p>=50)
printf("\n grade c");
else
printf("\n grade f");
}
