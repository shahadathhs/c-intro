#include<stdio.h>

int main(void)
{
    int a, firstDigit;

    scanf("%d", &a);

    // firstDigit = a / 1000;

    while(a >= 10){
        a /= 10;
    }

    firstDigit = a;

    if (firstDigit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    

    return 0;
}
