#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int lsb = number & 1;
    printf("%d \n", lsb);
    return 0;
}