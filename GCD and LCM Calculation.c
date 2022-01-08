#include<stdio.h>
main()
{
   int a,b,r,x,y,lcm;
   printf("Enter Two Number: ");
   scanf("%d %d",&a,&b);
   x =a;y = b;
   do{
    r = a % b;
    a = b;
    b = r;
   }
   while(r != 0);
   printf("GCD : %d\n", a);

   lcm = (x*y)/a;
   printf("LCM : %d", lcm);
}
