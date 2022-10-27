#include <stdio.h>

void math1();

int main(){
    math2();
    return 0;
}

void math1(){
    int reverse = 0, rem;
    int num[3] = {123, 208478933, -73634};

    for (int i = 0; i < 3; i++){
        while (num[i] != 0) {
            rem = num[i] % 10;
            reverse = reverse * 10 + rem;
            num[i] /= 10;
        }
    printf("Reversed number is: %d\n", reverse);
    reverse = 0;
    }
}


