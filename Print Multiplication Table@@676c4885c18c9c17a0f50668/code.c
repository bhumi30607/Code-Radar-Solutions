#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", N);
    for (int i=1; i<=10; i++) {
        printf("%d \n", N ,i, N*i);
    }
    return 0;
}