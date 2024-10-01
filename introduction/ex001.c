#include <stdio.h>

//"Hello World!" in C

int main() {
    char s[100];
    
    scanf("%[^\n]%*c", s);
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}