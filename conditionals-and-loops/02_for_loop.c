/*
 * Author: Luan Ferreira
 * Exercise: For Loop in C
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
 * Last verified on: October 02, 2024
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);

  	for(int i = a; i <= b; i++){
        switch (i)
        {
        case 1:
            printf("one\n");
            break;

        case 2:
            printf("two\n");
            break;

        case 3:
            printf("three\n");
            break;

        case 4:
            printf("four\n");
            break;

        case 5:
            printf("five\n");
            break;

        case 6:
            printf("six\n");
            break;

        case 7:
            printf("seven\n");
            break;

        case 8:
            printf("eight\n");
            break;

        case 9:
            printf("nine\n");
            break;

        default:
            printf(i % 2 == 0 ? "even\n" : "odd\n");
            break;
        }
    }

    return 0;
}

