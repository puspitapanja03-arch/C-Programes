/* Eliminate extra space */

#include<stdio.h>
#include<string.h>
main()
{
int i,j;
char s[100];
printf("\n Enter string:");
scanf("%[^\n]",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
i++;
while(s[i]==' ')
{
for(j=i;s[j]!='\0';j++)
s[j]=s[j+1];
}
}
}
puts(s);
}
