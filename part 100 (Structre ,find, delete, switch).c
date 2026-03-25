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
printf("\n Enter empno,ename,sal?");
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
void find()
{
emp e;
int z,i;
FILE *p;
p=fopen("a3.dat","a+");
printf("\n Enter record no:");
scanf("%d",&z);
rewind(p);
fseek(p,(z-1)*sizeof(emp),SEEK_SET);
fread(&e,sizeof(emp),1,p);
printf("\n Empno:%d Ename:%s Salary:%d",e.empno,e.ename,e.sal);
fclose(p);
}
void del()
{
emp e;
int z,i;
FILE *p,*q;
p=fopen("a3.dat","a+");
q=fopen("a4.dat","w+");
printf("\n Enter empno no:");
scanf("%d",&z);
while (fread(&e,sizeof (emp),1,p)==1)
{
if(e.empno!=z)
{
fwrite(&e,sizeof(emp),1,q);
}
}
fclose(p);
remove("a3.dat");
rename("a4.dat","a3.dat");
}
main()
{
int h;
do
{
printf("\n 1.append 2.disp 3.find 4.delete 5.exit");
printf("\n choice?");
scanf("%d",&h);
switch (h)
{
case 1:
    append();
    break;
case 2:
    disp();
    break;
case 3:
    find();
    break;
case 4:
    del();
    break;
}
}
while(h!=5);
}

