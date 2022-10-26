#include <stdio.h>


void algorithm1();

int main(){
    algorithm1();
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