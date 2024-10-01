/*
 * Author: Luan Ferreira
 * Exercise: Pointers in C
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true
 * Last verified on: October 01, 2024
*/

#include <stdio.h>

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