#include<stdio.h>
main()
{
int v,z,g;
char c;
FILE *p;
p=fopen("ab.txt","r");
printf("\n content \n");
v=0;
z=0;
g=0;
while (! feof(p))
{
c=fgetc(p);
if(c>65 && c<=90)
c=c+32;
printf("%c",c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
v++;
else if(c=='\n')
z++;
else if(c==' ')
g++;
}
fclose(p);
printf("\n vowels=%d line=%d space=%d",v,z,g);
}
