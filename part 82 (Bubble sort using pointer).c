/* Bubble sort using pointer */

#include<stdio.h>
#include<stdlib.h>
main()
{
int *x,n,i,j,t;
printf("\n How many no?");
scanf("%d",&n);
x=(int*) malloc(n*sizeof(int));
printf("\n Enter nos:\n");
for(i=0;i<n;i++)
{
scanf("%d",(x+i));
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(*(x+j)>*(x+j+1))
{
t=*(x+j);
*(x+j)=*(x+j+1);
*(x+j+1)=t;
}
}
}
for(i=0;i<n;i++)
{
printf("%5d",*(x+i));
}
}
