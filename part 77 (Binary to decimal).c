/* Binary to decimal */

#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
int p,n,d,i;
char s[100];
printf("\n Enter binary:");
scanf("%s",s);
n=strlen(s);
d=0;
p=0;
for(i=n-1;i>=0;i--)
{
if(s[i]=='1')
{
d=d+(int) pow(2,p);
}
p++;
}
printf("\n Decimal: %d",d);
}
