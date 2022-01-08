#include<stdio.h>

int main()
{
    int i,s,n;
    printf("Enter A Number For Factorial: ");
    scanf("%d",&n);
    i = n;
    s = 1;
    for(i=n;i>=1;i=i-1)
    {
        s = i*s;
    }
    printf("Output : %d", s);
}
