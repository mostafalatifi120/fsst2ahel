
#include <stdio.h>

int main(void) {
    const char secret[] = "1234";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    char guess;
    int hits = 0;

    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }

    printf("Buchstabe 1: ");
    if (scanf(" %c", &guess) != 1) {
        printf("ungueltig\n");
        return 1;
    }

    for (int i = 0; i < len; i++) {
        if (guess == secret[i]) {
            hits++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%c ", guessed[i]);
    }
    printf("\n");

    printf("hits: %d\n", hits);
    return 0;
}
