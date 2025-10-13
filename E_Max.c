#include<stdio.h>

int main(void)
{
    int input;

    scanf("%d", &input);

    int max = 0;

    for (int i = 1; i <= input; i++)
    {
        int tem;

        scanf("%d", &tem);

        if(tem > max)
        {
            max = tem;
        }
    }

    printf("%d", max);
    
    return 0;
}
