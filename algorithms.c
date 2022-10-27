#include <stdio.h>

void algorithm1(int a, int b);
void algorithm2(int a, int b);


int main(){
    algorithm2(25, 5);
    algorithm2(12, 5);
    algorithm2(30, 5);

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

void algorithm2(int a, int b){
    if (a + b == 30)
        printf("Their sum is 30\n");
    else if (a == 30 || b == 30)
        printf("One of them is 30\n");
    else
        printf("You entered %d and %d\n", a, b);
}
