#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    int c, d;

    printf("Initial values: a = %d, b = %d\n\n", a, b);

    // Post-increment
    c = a++;
    printf("Post-increment:\n");
    printf("After c = a++; c = %d, a = %d\n\n", c, a);

    // Pre-increment
    d = ++b;
    printf("Pre-increment:\n");
    printf("After d = ++b; d = %d, b = %d\n\n", d, b);

    int x = 10, y = 10;
    int p, q;

    printf("Initial values: x = %d, y = %d\n\n", x, y);

    // Post-decrement
    p = x--;
    printf("Post-decrement:\n");
    printf("After p = x--; p = %d, x = %d\n\n", p, x);

    // Pre-decrement
    q = --y;
    printf("Pre-decrement:\n");
    printf("After q = --y; q = %d, y = %d\n\n", q, y);

    // Shortened assignment operators
    int num = 10;
    printf("Initial num = %d\n\n", num);

    num += 5;  // same as num = num + 5
    printf("After num += 5 → num = %d\n", num);

    num -= 3;  // same as num = num - 3
    printf("After num -= 3 → num = %d\n", num);

    num *= 3;  // same as num = num * 3
    printf("After num *= 3 → num = %d\n", num);

    num /= 4;  // same as num = num / 4
    printf("After num /= 4 → num = %d\n", num);

    num %= 3;  // same as num = num % 3
    printf("After num %%= 3 → num = %d\n", num);

    return 0;
}
