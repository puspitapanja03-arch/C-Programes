/* Checking palindrome or not */

#include<stdio.h>
#include<string.h>
int palindrome (char s[100])
{
int n,i,j;
n=strlen (s);
i=0;
j=n-1;
while(i<j)
{
if(s[i]!=s[j])
return 0;
i++;
j--;
}
return 1;
}
main()
{
int p;
char s[100];
printf("\n enter sentence:");
scanf("%[^\n]",s);
p=palindrome(s);
if(p==1)
printf("\n palindrome");
else
printf("\n Not palindrome");
}
