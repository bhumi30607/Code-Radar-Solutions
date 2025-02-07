#include <stdio.h>

int main() {
    int x,y,z;
    float average;
    
    scanf("%d" ,&x);
    scanf("%d" ,&y);
    scanf("%d" ,&z);

    average = (x+y+z)/3.0;
    printf("Average: %.2f\n", average);
    return 0;
}