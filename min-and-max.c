#include<stdio.h>

int main(void)
{
    int a, b, c;
    int min, max;

    scanf("%d %d %d", &a, &b, &c);

    min = max = a;

    if(b < min)
    {
        min = b;
    }
    if(c < min)
    {
        min = c;
    }

    if(b > max)
    {
        max = b;
    }

    if(c > max)
    {
        max = c;
    }

    printf("%d %d", min, max);

    return 0;
}
