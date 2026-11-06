#include <stdio.h>


int strcmp(const char word1[], const char word2[]){
    int diff = 0;
    for (int i = 0;word1[i] != '\0'; i++ , diff |= word1[i] != word2[i])
    return diff;
}

int main(void) {

    const char secret[] = "1234";
    const int len = sizeof(secret) - 1;
    char guessed[len];
    char guess;
    int hits = 0;
    int fails = 0;

    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }

    while (fails < 5) {

        printf("Buchstabe: ");

        if (scanf(" %c", &guess) != 1) {
            printf("ungueltig\n");
            return 1;
        }

        hits = 0;

        for (int i = 0; i < len; i++) {
            if (guess == secret[i]) {
                hits++;
                guessed[i] = guess;
            }
        }

        for (int i = 0; i < len; i++) {
            printf("%c ", guessed[i]);
        }

        fails == (hits == 0);

        if (hits == 0) {
            fails++;
        }

        printf("Fails: %d/5\n", fails);
    }

    printf("Game Over!\n");

    return 0;
}