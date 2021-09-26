#include <stdio.h>

// proves that the system implementation of
// an integer is 32 bits, or 2^32 (4.3 billion ish)

int main (void) {

		long i = 1;

		while (i++ > 0) {
				;
		}
		printf("long: %ld", i);
		return 0;

}
