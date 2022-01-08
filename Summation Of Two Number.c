#include <stdio.h>

int main()
{
    int a,b,sum;

    printf("Enter First(Integer) Number: ");
    scanf("%d", &a);
    printf("Enter Second(Integer) Number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Total: %d", sum);
    return 0;
}
