#include<stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) 
    {
        int tem;

        scanf("%d", &tem);

        // Handle 0 value
        if (tem == 0)
        {
            printf("0\n");
            continue;
        }

        while (tem > 0)
        {
            printf("%d ", tem % 10);
            tem /= 10;
        }

        printf("\n");
    }
    
    return 0;
}
