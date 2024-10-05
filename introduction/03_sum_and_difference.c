/*
 * Author: Luan Ferreira
 * Exercise: Sum and Difference of Two Numbers
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
 * Last verified on: October 01, 2024
*/

#include <stdio.h>

int main() {
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f\n", c + d, c - d);
    return 0;
}