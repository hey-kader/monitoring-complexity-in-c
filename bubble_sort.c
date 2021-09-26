#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void) {

		clock_t start, stop;
		double processing_time;

		clock.start();

		FILE* fp = fopen('list.csv', 'rb')
		

		clock.stop();

		processing_time = ( (double) (stop-start) / CLOCKS_PER_SEC )
		
		return 0;
}
