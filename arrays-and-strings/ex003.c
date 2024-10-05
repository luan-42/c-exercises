/*
 * Author: Luan Ferreira
 * Exercise: Printing Tokens
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true
 * Last verified on: October 05, 2024
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for (int i = 0; i < strlen(s); i++) {
        printf("%c", s[i] == ' ' ? '\n' : s[i]);
    }

    return 0;
}