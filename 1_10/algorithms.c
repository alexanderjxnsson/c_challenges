#include <stdio.h>

void algorithm1(int a, int b);
void algorithm2(int n);
void algorithm3(int a, int b);
void algorithm4(int a);


int main(){
    algorithm4(105);
    algorithm4(10);
    algorithm4(15);
    algorithm4(5);
    return 0;
}

void algorithm1(int a, int b){
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

void algorithm2(int n){
    int const x = 51;
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

void algorithm3(int a, int b){
    if (a + b == 30)
        printf("Their sum is 30\n");
    else if (a == 30 || b == 30)
        printf("One of them is 30\n");
    else
        printf("You entered %d and %d\n", a, b);
}

void algorithm4(int a){
    if (a >= 90 && a <= 110 || a >= 190 && a <= 210)
        printf("True\n");
    /* #include <stdlib.h>
    if (abs(a - 100) <= 10 || abs(x - 200) <= 10)
        return true;
     */
}

void algorith5(){

}