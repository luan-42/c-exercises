/*
 * Author: Luan Ferreira
 * Exercise: Playing With Characters
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true
 * Last verified on: October 01, 2024
*/

#include <stdio.h>

int main() 
{
    char ch;
    char s[30];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}
