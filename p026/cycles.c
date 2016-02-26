#include <stdio.h>
#include <stdlib.h>

int cycleLength(int num) {
	int *arr = calloc(1, sizeof(int) * (num + 1));
	int numer = 1;
	int denom = num;

	int len = 0;
	int rem = 0;
	int i = 0;

	while (numer > 0) {
		if (numer < denom)
			numer *= 10;

		rem = numer % denom;
		if (arr[rem]) {
			len = i - arr[rem];
			break;
		}	
		
		arr[rem] = i++;
		numer = rem;	
	}

	free(arr);
	return len;
}

int main(int argc, char **argv) {
	int max = 0;
	int num;

	int i;
	for (i = 2; i < 1000; ++i) {
		int temp;
		if((temp = cycleLength(i)) > max) {
			max = temp;
			num = i;
		}
	}

	printf("num=%d   len=%d\n", num, max);
	return 0;
}
