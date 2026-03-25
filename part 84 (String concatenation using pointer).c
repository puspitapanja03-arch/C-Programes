/* String concatenate using pointer */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char*concat(char*a,char*b)
{
int m,n,i,j;
char*s;
m=strlen(a);
n=strlen(b);
s=(char*)malloc((m+n+1)*sizeof(char));
j=0;
for(i=0;i<m;i++)
{
*(s+j)=*(a+i);
j++;
}
for(i=0;i<n;i++)
{
*(s+j)=*(b+i);
j++;
}
*(s+j)='\0';
return s;
}
main()
{
int n;
char *p,*q,*r;
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
r=concat(p,q);
printf("\n %s",r);
}
