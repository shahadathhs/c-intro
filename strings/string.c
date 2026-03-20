#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[25]; // Example: Shahadath
    scanf("%s", s); // No need for & with strings

    printf("%s", s);

    printf("\n%d", s[9]); // prints ASCII value of null char if string shorter

    char gs[50];
    getchar(); // consume leftover newline from previous scanf

    printf("\nEnter a line: ");
    fgets(gs, sizeof(gs), stdin);

    printf("\n%s", gs);

    char si[6] = {'S', 'A', 'J', 'I', 'B'};
    char stringI[6] = "SAJIB";
    printf("\n%s %s", si, stringI);

    int count = 0;
    for (int i = 0; stringI[i] != '\0'; i++)
    {
        count++;
    }
    
    printf("\n%d", count);

    int length = strlen(stringI);

    printf(" %d", length);

    return 0;
}
