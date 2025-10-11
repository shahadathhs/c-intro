#include <stdio.h>

int main(void)
{
    int i, j, n, x;

    // Example 1: for loop basic
    for (i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    // Example 2: for loop multiple init/update
    for (i = 0, j = 10; i < 5; i++, j -= 2) {
        printf("i=%d, j=%d\n", i, j);
    }

    // Example 3: sum 1..n
    if (scanf("%d", &n) == 1) {
        long long sum = 0;
        
        for (i = 1; i <= n; i++) {
            sum += i;
        }
        
        printf("\nSum 1..%d = %lld\n", n, sum);
    }

    // Example 4: even/odd numbers
    if (scanf("%d", &n) == 1) {
        printf("\nEven numbers 0..%d: ", n);
        for (i = 0; i <= n; i++) {
            if (i % 2 == 0) {
                printf("\n%d ", i);
            }
        }
        
        printf("\nOdd numbers 0..%d: ", n);
        for (i = 0; i <= n; i++) {
            if (i % 2 != 0) {
                printf("\n%d ", i);
            }
        }
        
        printf("\n");
    }

    // Example 5: continue
    printf("\nNumbers 0..9 skipping multiples of 3: ");
    for (i = 0; i < 10; i++) {
        if (i % 3 != 0) {
            printf("\n%d ", i);
        }
    }
    printf("\n");

    // Example 6: break
    printf("\nFirst number divisible by 7 from 1..100: ");
    for (i = 1; i <= 100; i++) {
        if (i % 7 == 0) { 
            printf("%d\n", i); 
            break; 
        }
    }

    // Example 7: while loop
    if (scanf("%d", &n) == 1) {
        i = 1;
        
        printf("\nNumbers 1..%d using while: ", n);
        while (i <= n) { 
            printf("\n%d ", i); 
            i++; 
        }
        
        printf("\n");
    }

    // Example 8: do-while
    x = 0;
    do { 
        printf("x=%d\n", x); 
        x++; 
    } while (x < 1);

    // Example 9: nested for
    printf("\nMultiplication table 1..3:\n");
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d\t", i*j);
        }
        printf("\n");
    }

    return 0;
}
