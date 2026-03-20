#include<stdio.h>

int main(void)
{
    char letter;

    scanf("%c", &letter);

    // printf("%c %d", letter+32, letter);
    // printf("%c %c", letter+32, letter-32);

    if(letter >= 'A' && letter <= 'Z')
    {
        printf("%c", letter+32);
    }
    else
    {
        printf("%c", letter-32);
    }
    
    return 0;
}
