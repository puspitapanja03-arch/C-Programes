  #include<stdio.h>
int lsearch(int x[20],int n,int d)
{
int i;
for(i=0;i<n;i++)
{
if(x[i]==d)
return i;
}
return -1;
}
main()
{
int x[20],n,d,i,p;
printf("\n How many nos. do you want to enter?");
scanf("%d",&n);
printf("\n enter data:\n");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
printf("\n no to be searched?");
scanf("%d",&d);
p=lsearch(x,n,d);
if(p!=-1)
printf("\n pos=%d",p);
else
printf("\n not found");
}

