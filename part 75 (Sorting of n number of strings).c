/* Sorting of n number of name in an array */

#include<stdio.h>
#include<string.h>
main()
{
char s[20][20],t[20];
int i,j,n;
printf("\n How many names?");
scanf("%d",&n);
for(i=0;i<n;i++)
{
fflush(stdin);
printf("\n Name:");
scanf("%[^\n]",s[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(strcmp(s[j],s[j+1])>0)
{
strcpy(t,s[j]);
strcpy(s[j],s[j+1]);
strcpy(s[j+1],t);
}
}
}
for(i=0;i<n;i++)
{
printf("\n %s",s[i]);
}
}
