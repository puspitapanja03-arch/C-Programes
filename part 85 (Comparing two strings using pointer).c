/* Comparing two strings using pointer */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int *cmp(char*a,char*b)
{
int i;
for(i=0;*(a+i)!='\0' && *(b+i)!='\0';i++)
{
if(*(a+i)!=*(b+i))
{
return *(a+i)-*(b+i);
}
}
return*(a+i)-*(b+i);
}
main()
{
int n,r;
char *p,*q;
printf("\n size=");
scanf("%d",&n);
p=(char*)malloc(n*sizeof(char));
q=(char*)malloc(n*sizeof(char));
fflush(stdin);
printf("\n Enter 1st string:");
scanf("%[^\n]",p);
fflush(stdin);
printf("\n Enter 2nd string:");
scanf("%[^\n]",q);
r=cmp(p,q);
printf("\n %d",r);
}
