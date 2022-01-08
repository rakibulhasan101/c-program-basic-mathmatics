#include<stdio.h>

main()
{
    float r , area , peri ;
    printf("Enter The Radius Of A Circle: ");
    scanf("%f",&r);
    area = 3.1416 * r * r ;
    peri = 2 * 3.1416 * r ;
    printf("The Area Is %f And Perimeter Is %f" , area, peri);
}
