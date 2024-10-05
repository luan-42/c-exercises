/*
 * Author: Luan Ferreira
 * Exercise: "Hello World!" in C
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true
 * Last verified on: October 01, 2024
*/

#include <stdio.h>

int main() {
    char s[100];
    
    scanf("%[^\n]%*c", s);
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}