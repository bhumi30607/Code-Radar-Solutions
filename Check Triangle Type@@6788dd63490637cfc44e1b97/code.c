#include<stdio.h>

int main() {
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a=b && b=c && c=a) {
        printf("Equilateral");
    }
    else if(a=b && b=a && a!=c ) {
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }
    return 0;
}