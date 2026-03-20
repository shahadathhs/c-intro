#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int alreadyCounted = 0;

        for (int k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                alreadyCounted = 1;

                break;
            }
        }

        if (alreadyCounted)
        {
            continue;
        }

        int count = 0;

        for (int j = 0; j < 10; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }

        printf("%d -> %d\n", a[i], count);
        
    }
    

    return 0;
}
