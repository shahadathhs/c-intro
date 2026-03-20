#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[101], b[101];
    scanf("%s %s", a,b);

    int length_a = strlen(a);
    int length_b = strlen(b);
    
    // for (int i = 0; i <= length_b; i++)
    // {
    //     a[i] = b[i];
    // }

    strcpy(a,b);
    
    printf("%s %s \n", a,b);

    int new_length_a = strlen(a);

    // for (int i = 0; i <= length_b; i++)
    // {
    //     a[i+new_length_a] = b[i];
    // }
    strcat(a,b);

    printf("%s %s \n", a,b);

    return 0;
}
