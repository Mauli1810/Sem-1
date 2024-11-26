#include <stdio.h>

int main() {
    int a = 10;       
    int *ptr = &a;    

    printf("Initial value of a: %d\n", a);
    printf("Value of a through pointer ptr: %d\n", *ptr);

    
    *ptr = 20;

    printf("Modified value of a: %d\n", a);
    printf("Value of a through pointer ptr: %d\n", *ptr);

    return 0;
}

