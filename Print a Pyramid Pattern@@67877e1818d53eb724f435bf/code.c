#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    // Loop through rows
    for(int i = 1; i <= N; i++) {
        // Print spaces before stars
        for(int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}