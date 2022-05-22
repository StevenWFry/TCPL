#include <stdio.h>

int main() {
    int c;
    int e = EOF;

    while((c = getchar()) != EOF){
        putchar(c);
        printf("%d", e);
    }
}