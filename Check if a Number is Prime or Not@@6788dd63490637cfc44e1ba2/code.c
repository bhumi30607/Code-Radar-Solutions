// Your code here...
#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num % num == 0) {
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}