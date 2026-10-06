#include <stdio.h>
#include <ctype.h>

int main() {
    int c;

    printf("Enter ciphertext:\n");
    printf("Press Ctrl+D when finished.\n\n");

    while ((c = getchar()) != EOF) {

        if (c >= 'A' && c <= 'Z') {
            c = 'Z' - (c - 'A');
        }
        else if (c >= 'a' && c <= 'z') {
            c = 'z' - (c - 'a');
        }

        putchar(c);
    }

    printf("\n");

    return 0;
}