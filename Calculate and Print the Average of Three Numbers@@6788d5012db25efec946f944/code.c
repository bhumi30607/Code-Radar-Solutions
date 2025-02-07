#include <stdio.h>

int main() {
    int x,y,z;
    float average;
    average = (x+y+z)/3;
    scanf("%d" ,&x);
    scanf("%d" ,&y);
    scanf("%d" ,&z);
    printf("Average: %.2f\n", average);
    return 0;
}