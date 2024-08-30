#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char* rand_string_alloc(size_t size);
void rand_string(char *s, size_t size);

int main() {
    srand(time(NULL));

    printf("Random 7 letter word: %s\n", rand_string_alloc(7));

    return 0;
}

//Given Project code
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

void rand_string(char *s, size_t size){
    for (int i = 0; i < size; i++) {
        s[i] = randchar();
    }
}