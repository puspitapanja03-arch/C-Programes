/* File copy */

#include<stdio.h>
main()
{
char c;
FILE*p,*q;
p=fopen("ab.txt","r");
if(p==NULL)
{
printf("Source not found");
return 0;
}
q=fopen("ab1.txt","w");
c=fgetc(p);
while(!feof(p))
{
fputc(c,q);
c=fgetc(p);
}
fclose(p);
fclose(q);
}
