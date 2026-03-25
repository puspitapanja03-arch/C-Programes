#include<stdio.h>
#include<stdlib.h>
struct emp
{
int empno;
char ename[20];
int sal;
};
typedef struct emp emp;
void append()
{
emp e;
int n,i;
FILE *p;
p=fopen("a3.dat","a+");
printf("\n How many rec?");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter empmo,ename,sal?");
scanf("%d %s %d",&e.empno,e.ename,&e.sal);
fwrite(&e,sizeof(emp),1,p);
}
fclose(p);
}
void disp()
{
emp e;
FILE *p;
p=fopen("a3.dat","a+");
while(fread(&e,sizeof(emp),1,p)==1)
{
printf("\n Empno : %d Ename : %s Salary : %d",e.empno,e.ename,e.sal);
}
fclose(p);
}
main()
{
int h;
do
{
printf("\n 1.append 2.disp 3.exit");
printf("\n Choice?");
scanf("%d",&h);
switch(h)
{
case 1:
append();
break;
case 2:
disp();
break;
}
}
while(h!=3);
}
