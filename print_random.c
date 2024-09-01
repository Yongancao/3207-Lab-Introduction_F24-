#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.c"

char* rand_string_alloc(size_t size);
void rand_string(char *s, size_t size);

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}