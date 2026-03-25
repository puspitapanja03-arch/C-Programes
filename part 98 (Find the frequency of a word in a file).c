#include<stdio.h>
#include<string.h>
int main()
{
int z=0;
char w[20],c[20];
FILE *p;
p=fopen("ab.txt","r");
if(p==NULL)
{
printf("\n file not found");
return 0;
}
printf("\n Find what?");
gets(w);
fscanf(p,"%s",c);
while(!feof(p))
{
if(strcmp(c,w)==0)
z++;
fscanf(p,"%s",c);
}
fclose(p);
printf("\n freq=%d",z);
}
