/* Counting number of a given letter in a string */

#include<stdio.h>
int freq(char s[100],char t)
{
int i,j,c;
c=0;
for (i=0;s[i]!='0';i++)
{
if( s[i]==t)
c++;
}
return c;
}
main()
{
char x[100],d;
int k,n,i;
printf("\n Enter sentence:");
scanf("%[^\n]",x);
fflush(stdin);
printf("\n Enter letter :\n");
scanf("%c",&d);
k=freq(x,d);
printf("\n count=%d",k);
}
