/* s=1+2+3+.....nth term */

#include<stdio.h>
void main()
   {
   int a,s,n;
   printf("\n enter any no:");
   scanf("%d",&n);
   a=1;
   s=0;
   while(a<=n)
   {
   s=s+a;
   printf("%d+",a);
   a++;
   }
   printf("\n sum=%d",s);
   }
