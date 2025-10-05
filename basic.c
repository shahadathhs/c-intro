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

    return 0;
}
