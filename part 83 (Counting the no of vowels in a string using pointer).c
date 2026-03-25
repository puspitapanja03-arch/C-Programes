#include<stdio.h>
#include<stdlib.h>
main()
{
int i,n,vc=0;
char *s;
printf("\n Enter size:");
scanf("%d",&n);
s=(char *) malloc(n* sizeof(char));
fflush(stdin);
printf("\n string:");
scanf("%[^\n]",s);
for(i=0;*(s+i)!='\0';i++)
{
if(*(s+i)>=65 && *(s+i)<=90)
*(s+i)=*(s+i)+32;
if(*(s+i)=='a'||*(s+i)=='e'||*(s+i)=='i'||*(s+i)=='o'||*(s+i)=='u')
vc++;
}
printf("\n vowels=%d",vc);
}
