#include <stdio.h>

int main() {
    char x[100];
    scanf("%c", &x);
    if(x >='A'&& x <= 'Z') {
        printf("Uppercase");
    }
    else if (x >= 'a' && x <= 'z') {
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet")
    }
    return 0;
}