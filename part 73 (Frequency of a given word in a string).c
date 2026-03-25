/* Frequency of a given word */

#include<stdio.h>
#include<string.h>
main()
{
int i,j,c=0;
char s[100],w[20],t[20];
printf("\n Enter sentence:");
scanf("%[^\n]",s);
fflush(stdin);
printf("\n Find what:");
scanf("%s",w);
j=0;
for(i=0;s[i]!='\0';i++)
{
if(s[i]!=' ' && s[i]!='.')
{
t[j]=s[i];
j++;
}
else
{
t[i]='\0';
if(strcmp(w,t)==0)
c++;
j=0;
}
}
printf("\n freq=%d",c);
}
