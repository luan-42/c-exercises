/*
 * Author: Luan Ferreira
 * Exercise: Functions in C
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true
 * Last verified on: October 01, 2024
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int result = a;
    if (b > result)
        result = b;
    if (c > result)
        result = c;
    if (d > result)
        result = d;
    return result;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}