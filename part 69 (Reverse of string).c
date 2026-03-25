/* Reverse of string */

#include<stdio.h>
#include<string.h>
void rev(char s[100])
{
int n,i,j;
char t;
n=strlen(s);
i=0;
j=n-1;
while(i<j)
{
t=s[i];
s[i]=s[j];
s[j]=t;
i++;
j--;
}
}
main()
{
char x[100];
printf("\n enter sentence:");
scanf("%[^\n]",x);
rev(x);
printf("\n %s",x);
}
