#include<stdio.h>

int main(void)
{
    char ch;

    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }

    return 0;
}

