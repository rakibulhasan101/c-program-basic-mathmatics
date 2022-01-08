#include<stdio.h>
main()
{
    float c,f;
    printf("Enter Centigrade : ");
    scanf("%f", &c);
    f = 32 + (9 * c / 5);
    printf("Fahrenheit : %f", f);
}
