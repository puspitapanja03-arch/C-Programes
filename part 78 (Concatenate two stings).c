/* String concatenate */

#include<stdio.h>
void concat(char x[20],char y[20])
{
int i,j;
i=0;
while(x[i]!='\0')
i++;
for(j=0;y[j]!='\0';j++)
{
x[i]=y[j];
i++;
}
x[i]='\0';
}
main()
{
char s[20],t[20];
printf("\n string 1:");
gets(s);
fflush(stdin);
printf("\n string 2:");
gets(t);
concat(s,t);
puts(s);
}
