#include <stdio.h>

char *findFirstChar(const char *str, char target) {
    while (*str != '\0') {
        if (*str == target) {
            return (char *)str; // Found the character, return pointer to it
        }
        str++; // Move to the next character in the string
    }
    return NULL; // Character not found, return NULL
}

int main() {
    const char *str = "Hello, World!";
    char target = 'o';

    char *ptr = findFirstChar(str, target);

    if (ptr != NULL) {
        printf("Found '%c' at position %ld\n", target, ptr - str);
    } else {
        printf("'%c' not found in the string.\n", target);
    }

    return 0;
}
