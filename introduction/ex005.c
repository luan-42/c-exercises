#include <stdio.h>

//Pointers in C

void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
    *b = *b < 0 ? *b * -1: *b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}