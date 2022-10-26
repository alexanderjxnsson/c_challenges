#include <stdio.h>

void math1();
void math2();

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

void math2(){
    int n = 0;
    int const x = 51;
    printf("Enter a value: ");
    scanf("%d", &n);
    if (n > x)
    {
        n = (n - x) * 3;
        printf("n is greater than 51\n");
        printf("The absolute difference * 3 is: %d\n", n);
    }
    else{
        n = x - n;
        printf("n is less than 51\n");
        printf("The absolute difference is: %d\n", n);
    }
    
}
