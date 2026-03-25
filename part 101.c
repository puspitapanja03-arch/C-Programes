/* File copy using command ine arguments */

#include<stdio.h>
main(int argc,char *argv[])
{
char c;
FILE *p,*q;
if (argc!=3)
{
printf("not possible");
return 0;
}
p=fopen(argv[1],"r");
if(p==NULL)
{
printf("Source not found");
return 0;
}
q=fopen(argv[2],"w");
c=fgetc(p);
while(!feof(p))
{
fprintf(q,"%c",c);
c=fgetc(p);
}
fclose(p);
fclose(q);
}
