#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    if((x>=0) && (x<=9)) {
        print("Digit \n");
    }
    else if((x>='A' ) && (x<='Z') || (x>='a') && (x<='z')) {
        if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U' || x=='a' || x=='e' || x=='i' || x=='o'|| x=='u') {
            printf("Vowel \n");
        }
        else{
            printf("Consonan \n");
        }
    }
    else {
        printf("Special Character");
    }
    return 0;
}