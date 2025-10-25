// #include<stdio.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int d2 = 0, d3 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             d2++;
//         }
//         else if (a[i] % 3 == 0)
//         {
//             d3++;
//         }
//     }

//     printf("%d %d", d2, d3);
    
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>

// int main(void)
// {
//     char s[100000];
//     scanf("%s", s);

//     int length = strlen(s);

//     char v[5] = {'a', 'e', 'i', 'o', 'u'};

//     int c = 0;

//     for (int i = 0; i < length; i++)
//     {
//         int isVowel = 0;
//         for (int j = 0; j < 5; j++)
//         {
//             if(s[i] == v[j])
//             {
//                 isVowel = 1;
//                 break;
//             }
//         }

//         if (!isVowel)
//         {
//             c++;
//         }
        
//     }

//     printf("%d", c);
    
    
//     return 0;
// }
// #include<stdio.h>

// int main(void)
// {
//     int T = 0;
//     scanf("%d", &T);

//     for (int i = 0; i < T; i++)
//     {
//         int M1, M2, D;

//         scanf("%d %d %d", &M1, &M2, &D);

//         int totalWork = M1 * D;
//         int totalMen = M1 + M2;
//         int newDays = totalWork / totalMen;

//         int daysFewer = D - newDays;

//         printf("%d\n", daysFewer);
//     }
    
//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main(void)
{
    int T = 0;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char s[10000];
        scanf("%s", s);

        int cCap = 0, cSml = 0, cDgt = 0;
        
        int length = strlen(s);

        for (int i = 0; i < length; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                cCap++;
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                cSml++;
            }

            if (s[i] >= '0' && s[i] <= '9')
            {
                cDgt++;
            }
        }
        

        printf("%d %d %d\n", cCap, cSml, cDgt);
    }
    
    return 0;
}
