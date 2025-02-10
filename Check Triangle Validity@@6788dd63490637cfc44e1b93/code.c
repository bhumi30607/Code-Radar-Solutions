#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if (x+y > z) {
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
    return 0;
}