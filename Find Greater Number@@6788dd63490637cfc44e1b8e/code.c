#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    if(x > y) {
        printf("%d", x);
    }
    else if (x < y) {
        printf("%d", y);
    }
    else{
        printf("%d", x,y);
    }
    return 0;
}