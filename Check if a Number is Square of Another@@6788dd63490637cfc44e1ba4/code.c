// Your code here...
#include<stdio.h>

int main() {
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(y== x*x) {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}