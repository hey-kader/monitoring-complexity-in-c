#include <stdio.h>
#include <math.h>
#define MAX 99999

#include "syslib.h"

int main (int argc, char * argv[]) {

		while (argc--) {
				printf("arg[%d]: %s\n", argc, argv[argc]);
		}

		int primes[MAX];
		int num_primes = 0;
		for (int i = 2; i < MAX; i++) {
				if (isPrime(i)) {
						primes[num_primes++] = i;
				}	
		}

		printf("prime count: %d\n", num_primes);
		print_primes(primes, num_primes);

		return 0;

}
