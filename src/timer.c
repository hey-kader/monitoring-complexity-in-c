#include <stdio.h>
#include <time.h>


int main (void) {
		
		clock_t start, end;
		double cpu_time_spent;

		start = clock ();

		for (int i = 0; i < 1000; i++) {
				printf("%d\n", i);
		}

		end = clock ();

		cpu_time_spent = ( (double) (end - start)  / CLOCKS_PER_SEC);
		printf("seconds: %f", cpu_time_spent);

		return 0;
}
