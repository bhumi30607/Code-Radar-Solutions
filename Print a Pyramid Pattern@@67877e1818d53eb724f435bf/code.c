#include<stdio.h>

int min() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N i++) {
        for(int j = i; j <N; j++ ) {
            printf(" ");
        }
            for(int k =1; k <= (2*i - 1); k++) {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}
