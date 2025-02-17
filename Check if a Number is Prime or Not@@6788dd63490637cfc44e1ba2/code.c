// Your code here...
#include<stdio.h>

int main() {
    int num > 0;
    scanf("%d", &num);
    if( num % 1 == 0 && num % num == 0) {
        printf("Prime");
    }
    else {
        printf("Not Prime")
    }
    return 0;
}