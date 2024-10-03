/*
 * Author: Luan Ferreira
 * Exercise: 1D Arrays in C
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true
 * Last verified on: October 03, 2024
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    free(arr);
    
    printf("%d", sum);

    return 0;
}