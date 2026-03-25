/* Input:SKY IS BLUE  Output:BLUE IS SKY */
/* EULB SI YKS */

#include<stdio.h>
#include<string.h>
void rev(char s[100],int i,int j)
{
char t;
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
int i,j;
char s[100];
printf("\n Enter sentence:");
scanf("%[^\n]",s);
rev(s,0,strlen(s)-1);
i=0;
for(j=0;s[j]!='\0';j++)
{
if(s[j]==' ')
{
rev(s,i,j-1);
i=j+1;
}
}
rev(s,i,j-1);
puts(s);
}
