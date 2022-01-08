#include<stdio.h>

main()
{
    int a,b,c,sum,avg;
    printf("Enter Numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c;
    printf(" The Sum Is : %d", sum);
    avg = (sum)/2;
    printf(" The Average Is : %d", avg);
}
