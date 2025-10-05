#include <stdio.h>

int main(void)
{
    int number;

    printf("Hello \n");
    printf("World \n \n");

    int num1;
    num1 = 10;
    printf("%d \n", num1);

    float f = 1.22;
    printf("%f \n", f);
    printf("%.2f \n", f);

    char c = '@';
    printf("%c \n", c);

    printf("\nEnter a number: ");
    scanf("%d", &number);

    printf("You entered: %d\n", number);

    return 0;
}
