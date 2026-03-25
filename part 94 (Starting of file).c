/* FILE *P; -> file pointer
p=fopen("file name","mode");
mode -> w(write) r(read) a(append)
fclose(p);
file
------
1.sequential file/text file(no fixed record length)
2. random file/data file(fixed record length)
sequential flile
-----------------
write
-----
fputc(c,p);
fprintf(p,"%c",c);
fputs(s,p);
putw(d,p);
read
-----
c=fgetc(p);
fscanf(p,"%c",&c);
fgets(s,20,p);
d=getw(p);
*/

#include<stdio.h>
main()
{
char c;
FILE *p;
p=fopen("ab.txt","w");
printf("\n press / to exit \n");
while(1)
{
c=getchar();
if(c=='/')
{
break;
}
fputc(c,p);
}
fclose(p);
}
