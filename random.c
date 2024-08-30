#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
    return 'A' + rand() % 26;
}

int main() {
    srand(time(NULL));

    char word[8]; // Array for the random word

    // makes the random word
    for (int i = 0; i < 7; i++) {
        word[i] = randchar();
    }

    word[7] = '\0'; // Null ender

    // Output the random word
    printf("Random 7-letter word: %s\n", word);

    return 0;
}
