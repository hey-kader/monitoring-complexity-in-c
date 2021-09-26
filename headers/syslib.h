#include <stdio.h>

int isPrime (int);
void print_primes (int [], int);

int isPrime (int n) {
		while (n > 2) {
				if (n % 2 == 0) {
						return 0;
				}
				else {
						n /= 2;
				}
		}
		return 1;

}

void print_primes (int primes[], int len) {
		while (--len >= 0) {
				printf("%d\n",primes[len]);	
		}		
}
