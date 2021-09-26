#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void print_list (int[], int);

int main (void) {

		clock_t start, stop;
		double processing_time;

		start = clock();

		// read in list of 10 arbitrary numbers in working directory
		// called 'list.csv'

		int data[501];
		FILE* fp = fopen("list.csv", "r+");
		int c;
		int i = 0;

		while ( (c = (fgetc(fp))) != EOF ) {

				printf("%c\n", c);					
				data[i++] = c;
		}	

		data[i] = '\0';
		print_list(data, i);
		stop = clock();
		processing_time = ( (double) (stop-start) / CLOCKS_PER_SEC );
		pclose(fp);
		printf("processing time: %f", processing_time);
		return 0;
}

void print_list (int list[], int length) {
		printf("\n");
		for ( int i = 0; i < length; i++) {
				printf("%d ",list[i]);
		}
		printf("\n");
}
