// ============================================
// C Programming Notes: Solutions to 5 Problems
// ============================================

/* Problem 1: Print a greeting message with special characters */
#include <stdio.h>
/*
int main() {
    printf("Hello, world! I am learning C programming language. ^_^\n");
    printf("Programming is fun and challenging. /\\/\\/\\\n");
    printf("I want to give my 100%% dedication to learn!\tI will succeed one day.\n");
    return 0;
}
*/

/* Problem 2: Multiply two integers (handle large results using long long) */
/*
#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    long long multiply = (long long)A * B;
    
    printf("%lld", multiply);
    
    return 0;
}
*/

/* Problem 3: Check if a number is divisible by 3 */
/*
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if(N % 3 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
*/

/* Problem 4: Print numbers divisible by both 3 and 7 up to N */
/*
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        if(i % 3 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        } 
    }

    return 0;
}
*/

/* Problem 5: Conditional purchases based on available money */

#include <stdio.h>

int main() {
    int taka;
    scanf("%d", &taka);

    if(taka > 1000) {
        printf("I will buy Punjabi\n");
        
        if(taka >= 1500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    } else {
        printf("Bad luck!");
    }

    return 0;
}
