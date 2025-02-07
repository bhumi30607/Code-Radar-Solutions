#include <stdio.h>

int main() {
    float x, area;
    const float pi = 3.14;

    scanf("%f", &x);
    
    area = pi * x * x;
    printf("Area: %.2f \n", area);
    return 0;
}