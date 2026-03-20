#include <stdio.h>

int main(void)
{
    int num = 75;

    // 1. Simple if statement
    if (num > 50) {
        printf("Simple if: %d is greater than 50\n", num);
    }

    // ================================
    // 2. if-else statement
    // ================================
    if (num % 2 == 0) {
        printf("if-else: %d is even\n", num);
    } else {
        printf("if-else: %d is odd\n", num);
    }

    // 3. if-else ladder (else if)
    if (num >= 90) {
        printf("if-else ladder: Grade A\n");
    } else if (num >= 75) {
        printf("if-else ladder: Grade B\n");
    } else if (num >= 50) {
        printf("if-else ladder: Grade C\n");
    } else {
        printf("if-else ladder: Grade F\n");
    }

    // 4. Nested if-else
    if (num >= 50) {
        if (num >= 75) {
            printf("Nested if-else: Excellent!\n");
        } else {
            printf("Nested if-else: Good\n");
        }
    } else {
        printf("Nested if-else: Needs Improvement\n");
    }

    // 5. Variation of if-else
    // Using logical operators in condition
    int age = 20;
    char gender = 'M';

    if (age >= 18 && gender == 'M') {
        printf("If-else variation: Eligible male for service\n");
    } else if (age >= 18 && gender == 'F') {
        printf("If-else variation: Eligible female for service\n");
    } else {
        printf("If-else variation: Not eligible\n");
    }

    return 0;
}
