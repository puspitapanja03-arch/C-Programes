/* Frequency of each character */

#include<stdio.h>
void freq(char s[100])
{
int i,j,c=0;
for(j='a';j<='z';j++)
{
c=0;
for(i=0;s[i]!='\0';i++)
{
if(s[i]==j)
c++;
}
if(c!=0)
printf("\n %c %d",j,c);
}
}
main()
{
char a[100];
printf("\n enter sentence:");
scanf("%[^\n]",a);
freq(a);
}
