#include <stdio.h>


void algorithm1();

int main(){

    return 0;
}

void algorithm1(){
    int a = 0, b= 0;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        printf("They are the same:\n");
        a = (a + b) * 3;
        printf("%d\n", a);
    }
    else{
        printf("They are not the same:\n");
        a = a + b;
        printf("%d\n", a);
    }
}

void reverse_number(){
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