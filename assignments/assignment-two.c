// ============================================
// C Programming Notes: Solutions to 5 Problems
// ============================================

/* Problem 1: Print “I Want More Assignments” N times */
// #include<stdio.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d. I Want More Assignments\n", i);
//     }

//     return 0;
// }

/* Problem 2: Print all numbers from 1 to N or N to 0 depending on sign */
// #include<stdio.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     if (n > 0)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     else
//     {
//         for (int i = n; i <= 0; i++)
//         {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }

/* Problem 3: Print array elements at odd indices in reverse order */
// #include<stdio.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (i % 2 == 1)
//         {
//             printf("%d ", arr[i]);
//         }
//     }

//     return 0;
// }

/* Problem 4: Calculate and print the sum of positive and negative numbers separately */
// #include<stdio.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     int pSum = 0;
//     int nSum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int temp;
//         scanf("%d", &temp);

//         if (temp > 0)
//         {
//             pSum += temp;
//         }
//         else
//         {
//             nSum += temp;
//         }
//     }
    
//     printf("%d %d", pSum, nSum);

//     return 0;
// }

/* Problem 5: Update a specific index in an array and print the array in reverse order */
#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);

    arr[index] = value;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
