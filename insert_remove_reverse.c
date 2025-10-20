#include<stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int a[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // insert
    int idx, val;
    scanf("%d %d", &idx, &val);

    for (int i = n; i >= idx; i--)
    {
        a[i] = a[i -1];
    }

    a[idx] = val;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    // remove
    int dIdx;
    scanf("%d", &dIdx);

    for (int i = dIdx; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    // decrease array size
    n--;
    
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
