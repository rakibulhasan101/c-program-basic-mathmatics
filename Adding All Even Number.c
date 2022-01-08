#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    long sum= 0;
    printf("\n Enter Last Number Of The Series : ");
    scanf("%d", &n);
    printf( "2+4+6+...+%d = " ,n);
    for(i=2;i<=n;i=i+2)  //condition
    {
        sum = sum + i;
    } // end of for
    printf("%d",sum);
    getch();
}
