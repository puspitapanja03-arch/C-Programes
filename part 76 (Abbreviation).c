/* Abbreviation */

#include<stdio.h>
#include<string.h>
main()
{
int i,j,k;
char s[100],t[100];
printf("\n Enter name:");
gets(s);
t[0]=s[0];
t[1]='.';
j=2;
for(i=1;s[i]!='\0';i++)
{
if(s[i]==' ')
{
k=i;
i++;
t[j]=s[i];
j++;
t[j]='.';
j++;
}
}
j=j-2;
while(s[k]!='\0')
{
t[j]=s[k];
k++;
j++;
}
t[j]='\0';
puts(t);
}
