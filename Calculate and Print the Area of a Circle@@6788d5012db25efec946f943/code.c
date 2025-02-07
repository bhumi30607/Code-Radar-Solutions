#include <stdio.h>

int main() {
    float x, area;
    const float pi = 3.14;
    
    scanf("%f", &x);
    
    area = (x**2 * pi);
    printf("Area: %.2f", area);
    return 0;
}