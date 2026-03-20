#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("Hello\n");
    printf("World\n\n");

    int num1 = 10;
    printf("%d\n", num1);

    float f = 1.22;
    printf("%f\n", f);
    printf("%.2f\n", f);

    char c = '@';
    printf("%c\n", c);

    bool a = true;
    bool b = false;
    printf("%d\n", a);
    printf("%d\n", b);

    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);
    
    printf("\nYour entered number: %d \n", number);
    
    float floatNum;
    printf("\nEnter a float: ");
    scanf("%f", &floatNum);

    printf("\nYour entered float: %.2f \n", floatNum);

    int ini;
    float inf;
    char inc;
    printf("\nEnter int, float, and char: ");
    scanf("%d %f %c", &ini, &inf, &inc);
    printf("\nYou entered: %d %.2f %c\n", ini, inf, inc);

    long long bigNum;
    printf("\nEnter a long long integer: ");
    scanf("%lld", &bigNum);
    printf("\nYour entered long long: %lld\n", bigNum);

    double dnum;
    printf("\nEnter a double: ");
    scanf("%lf", &dnum);
    printf("\nYour entered double: %.5lf\n", dnum);

     // ===============================
    // VARIABLE NAMING RULES & ROLES
    // ===============================
    //
    // 1. Use descriptive names that clearly describe what the variable stores.
    //    Example: total_students instead of ts or x.
    //
    // 2. Use snake_case for C programs (consistent with C standard library style).
    //    Example: total_marks, user_score
    //
    // 3. Keep names concise but meaningful — not too short, not too long.
    //
    // 4. Avoid abbreviations unless they are very common (e.g., temp, num, avg).
    //
    // 5. Variables are case-sensitive — total and Total are different.
    //
    // 6. Names must start with a letter or underscore (_).
    //    They can include letters, numbers, and underscores only.
    //
    // 7. Use plural names for arrays or collections (e.g., numbers[], students[]).
    //
    // 8. Constants should be written in UPPERCASE with underscores.
    //    Example: MAX_USERS, PI
    //
    // 9. Use nouns for variable names and verbs for function names.
    //    Example: int total_marks;  // noun
    //             int calculate_sum(int a, int b); // verb
    //
    // 10. Keep consistent naming for related variables (user_id, user_name, user_score).
    //

    return 0;
}
