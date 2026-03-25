/* Compare two strings */

#include<stdio.h>
int cmp(char a[20],char b[20])
{
int i;
for (i=0;a[i]!='\0' && b[i]!='\0';i++)
{
if(a[i]!=b[i])
{
return a[i]-b[i];
}
}
return a[i]-b[i];
}
main()
{
int j;
char s[20],t[20];
printf("\n string 1:");
gets(s);
fflush(stdin);
printf("\n string 2:");
gets(t);
j=cmp(s,t);
printf("\n %d",j);
}
