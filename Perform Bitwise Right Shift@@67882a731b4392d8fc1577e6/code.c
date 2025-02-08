#include <stdio.h>

int main() {
    char var a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    int result = a >> b;
    printf("%d", result);
    return 0;
}