#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // Integer Arithmetic
    int x = 10;
    int y = 3;

    int int_sum = x + y;
    int int_diff = x - y;
    int int_product = x * y;
    int int_division = x / y; // Integer division (fractional part is discarded)
    int int_mod = x % y; // Only work in between int

    printf("=== Integer Arithmetic ===\n");
    printf("Addition: %d\n", int_sum);
    printf("Subtraction: %d\n", int_diff);
    printf("Multiplication: %d\n", int_product);
    printf("Division: %d\n", int_division);
    printf("Modulus: %d\n\n", int_mod);

    // Mixed (int + float) Arithmetic
    int a = 10;
    float b = 3.5;

    float mix_sum = a + b;
    float mix_diff = a - b;
    float mix_product = a * b;
    float mix_division = a / b;

    printf("=== Mixed int & float Arithmetic ===\n");
    printf("Addition: %.2f\n", mix_sum);
    printf("Subtraction: %.2f\n", mix_diff);
    printf("Multiplication: %.2f\n", mix_product);
    printf("Division: %.2f\n", mix_division);

    return 0;
}
