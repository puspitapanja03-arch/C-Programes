/* string
---------
char s[20];
input
-----
scanf("%s",s); Without space
scanf("%[^\n]",s), With space
gets(s);
'\0' null character
char s[]="india";
i n d i a \0
0 1 2 3 4 5
print
-----
printf("\n %s",s);
puts(s);
string.h
--------
n=strlen(s); length
str cpy(t,s); copy
strcat(s1,s2); concatenate
str rev(s); reverse
str upr(s); upper
str lwr(s); lower
c=str cmp(s1,s2); compare
 abc  adc     98-100=-2
 0(same)
 >0(desc)
 <0(asc)
 A-65       +32   ASCII Code
 a-97
 0-48
 */

/* Input a string and count number of vowels */

#include<stdio.h>
main()
{
int i,vc=0;
char s[100];
printf("\n Enter sentence:");
scanf("%[^\n]",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>=65 && s[i]<=90)
s[i]=s[i]+32;
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='0'||s[i]=='u')
vc++;
}
printf("\n vowels=%d",vc);
}
