/*
 * Author: Luan Ferreira
 * Exercise: Sum of Digits of a Five Digit Number
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true
 * Last verified on: October 02, 2024
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int nums[5];
    
    scanf("%d", &n);

    nums[0] = n / 10000;
    n -= nums[0] * 10000;
    nums[1] = n / 1000;
    n -= nums[1] * 1000;
    nums[2] = n / 100;
    n -= nums[2] * 100;
    nums[3] = n / 10;
    n -= nums[3] * 10;
    nums[4] = n;

    printf("%d", nums[0] + nums[1] + nums[2] + nums[3] + nums[4]);
    return 0;
}