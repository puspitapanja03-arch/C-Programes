/* Input a string convert uppercase letter to lowercase and lowercase to uppercase */
#include<stdio.h>
void toggle(char x[100])
{
for(int i=0;x[i]!='\0';i++)
{
if(x[i]>=65 && x[i]<=90)
x[i]=x[i]+32;
if(x[i]>=97 && x[i]<=122)
x[i]=x[i]-32;
}
}
main()
{
char s[100];
printf("\n enter sentence:");
scanf("%[^\n]",s);
toggle(s);
printf("\n %s",s);
}
