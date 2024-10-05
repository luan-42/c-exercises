/*
 * Author: Luan Ferreira
 * Exercise: Array Reversal
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true
 * Last verified on: October 04, 2024
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = num - 1; i >= 0; i--)
        scanf("%d", arr + i);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}