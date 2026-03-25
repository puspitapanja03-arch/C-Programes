#include<stdio.h>
#include<stdlib.h>
//Calculate difference between two dates
typedef struct
{
int dd,mm,yy;
}date;
int leapyear(int y)
{
if(y%100==0)
if(y%400==0)
return 1;
else
return 0;
else
if(y%4==0)
return 1;
else
return 0;
}
int days_of_month(int m,int y)
{
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
return 31;
else if(m==2)
return 28+leapyear(y);
else
return 30;
}
main()
{
int n=0,i;
date d1,d2;
printf("\n Enter first date:");
scanf("%d/%d/%d",&d1.dd,&d1.mm,&d1.yy);
printf("\n Enter second date:");
scanf("%d/%d/%d",&d2.dd,&d2.mm,&d2.yy);
if(d1.yy==d2.yy)
{
if(d1.mm==d2.mm)
{
n=d2.dd-d1.dd;
}
else
{
for(i=d1.mm+1;i<d2.mm;i++)
n=n+days_of_month(i,d1.yy);
n=n+(days_of_month(d1.mm,d1.yy)-d1.dd)+d2.dd;
}
}
else
{
for(i=d1.yy+1;i<d2.yy;i++)
n=n+365+leapyear(i);
for(i=d1.mm+1;i<12;i++)
n=n+days_of_month(i,d1.yy);
for(i=1;i<d2.mm;i++)
n=n+days_of_month(i,d2.yy);
n=n+(days_of_month(d1.mm,d1.yy)-d1.dd)+d2.dd;
}
printf("\n days=%d",n);
}
