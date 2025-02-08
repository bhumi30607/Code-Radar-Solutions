#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if ( x == 365days) {
        printf("Not a Leap Year");
    }
    else{
        printf("Leap Year");
    }
    return 0;
}