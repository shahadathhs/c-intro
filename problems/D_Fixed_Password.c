#include<stdio.h>

int main(void)
{
    int correctPass = 1999;

    for (int i = 1; ; i++)
    {
        int tem;

        scanf("%d", &tem);

        if(tem == correctPass)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
        
    }
    
    return 0;
}
