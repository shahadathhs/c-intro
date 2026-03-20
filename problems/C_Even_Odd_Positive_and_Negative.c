#include<stdio.h>

int main(void)
{
    int input;

    scanf("%d", &input);

    int positive = 0;
    int negative = 0;
    int even = 0;
    int odd = 0;

    for (int i = 1; i <= input; i++)
    {
        int tem;

        scanf("%d", &tem);


        if(tem % 2 == 0) 
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(tem > 0)
        {
            positive++;
        }
        else if (tem < 0)
        {
            negative++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    

    return 0;
}
