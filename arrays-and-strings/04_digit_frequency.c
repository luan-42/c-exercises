/*
 * Author: Luan Ferreira
 * Exercise: Digit Frequency
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true
 * Last verified on: October 05, 2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    int i;
    int nums[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= 48 && s[i] <= 57) {
            nums[s[i] - '0'] ++;
        }
    }
    for (i = 0; i <= 9; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}