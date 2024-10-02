/*
 * Author: Luan Ferreira
 * Exercise: Printing Pattern Using Loops
 * HackerRank URL for this exercise: https://hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true
 * Last verified on: October 02, 2024
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;

    scanf("%d", &n);

    int size = n + n - 1;
    int m[size][size];

    for (int k = 0; k < n; k++) {
        for (int i = k; i < size - k; i++) {
            for (int j = k; j < size - k; j++) {
                m[i][j] = n - k;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}