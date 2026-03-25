/*
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
*/

#include<stdio.h>
main()
{
int a,b,c,s;
float d;
do
{
    printf("\n 1.add\n 2.sub\n 3.mul\n 4.div\n 5.exit");
    printf("\n enter your choice?");
    scanf("%d",&s);
    switch(s)
{
    case 1:
    printf("\n enter two nos:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("\n sum=%d",c);
    break;
    case 2:
    printf("\n enter two nos:");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("\n sub=%d",c);
    break;
    case 3:
    printf("\n enter two nos:");
        scanf("%d %d",&a,&b);
    c=a*b;
    printf("\n mult=%d",c);
    break;
    case 4:
    printf("\n enter two nos:");
    scanf("%d %d",&a,&b);
    d=(float)a/(float)b;
    printf("\n div=%f",d);
    break;
    case 5:
    printf("\n bye");
    break;
    default:
    printf("\n invalid input");
}
}
    while(s!=5);
}
