#include<stdio.h>
main()
{
int c,n,i,m;
float s;
FILE *p;
p=fopen("num.txt","w");
printf("\n How many no?");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&c);
fprintf(p,"%d\n",c);
}
fclose(p);

/*********************************/
printf ("The average of these %d numbers are \n",n);
p=fopen("num.txt","r");
fscanf(p,"%d",&c);
s=0;
m=0;
while(!feof(p))
{
printf("%d\n",c);
s=s+c;
m++;
fscanf(p,"%d",&c);
}
s=s/m;
printf("\n avg=%f",s);
fclose(p);
}

