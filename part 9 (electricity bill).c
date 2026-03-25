/*
unit          rate
first 50      2.50 per unit
next 50 unit  3.50 per unit
next 100 unit 5.00 per unit
above         7.00 per unit
*/

#include<stdio.h>
void main()
{
int u;
float p;
printf("\n enter unit:");
scanf("%d",&u);
if (u>=50)
p=u*2.50;
else if (u<=100)
p=50*2.50+(u-50)*3.50;
else if (u<=200)
p=50*2.50+50*3.50+(u-100)*5.00;
else
p=50*2.50+50*3.50+100*5.00+(u-200)*7.00;
printf("\n pay=%f",p);
}
