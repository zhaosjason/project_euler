#include <stdio.h>
#include <string.h>
#include <math.h>

#define BUFF_SIZE 250

int cycleLength(long double num) {
	char buff1[BUFF_SIZE];
	char buff2[BUFF_SIZE];
	int len = 0;

	int i;
	for (i = 0; i < BUFF_SIZE; ++i) {
		sprintf(buff1, "%d", (int) (num * pow(10, i)));
		
		int temp = (int) (num * pow(10, i));
		long double next = (num * pow(10, i)) - temp;
		sprintf(buff2, "%d", (int) (next * pow(10, i)));
		
		if (!strcmp(buff1, buff2)) {
			return len;
		}
	}

	return -1;
}

int main() {
	int max = 0;

	int i;
	for (i = 0; i < 1000; ++i) {
		int num = cycleLength(1.0 / (double) i);
		if (num > max) {
			max = num;
		}
	}

	printf("len = %d\n", max);
	return 0;
}
