/*
 * Author: Luan Ferreira
 * Exercise: Bitwise Operators
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true
 * Last verified on: October 02, 2024
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int and = 0;
    int or = 0;
    int xor = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                and = (i & j) > and && (i & j) < k ? (i & j) : and;
                or = (i | j) > or && (i | j) < k ? (i | j) : or;
                xor = (i ^ j) > xor && (i ^ j) < k ? (i ^ j) : xor;
            }
        }
    }
    printf("%d\n", and);
    printf("%d\n", or);
    printf("%d\n", xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}