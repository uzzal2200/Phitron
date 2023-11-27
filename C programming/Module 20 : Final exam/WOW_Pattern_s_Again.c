#include<stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    if (N < 1 || N > 20) {
        
        return 1;
    }

    for (int i = 1; i <=N; i++) {
        
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }

       
        for (int j = 0; j < 2*i-1; j++) {
            printf("^");
            
        }
        
        printf("\n");
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}