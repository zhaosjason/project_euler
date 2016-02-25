#include <stdio.h>

int main() {
	unsigned int num = 1;
	unsigned long sum = 0;

	int len = 1001 * 1001; // a 1001x1001 square
	int diff = 2;

	int i = 0;
	while (num <= len) {
		sum += num;		
		num += diff;
		++i;

		if (i == 4) {
			diff += 2;
			i = 0;
		}
	}

	printf("sum=%lu\n", sum);
	return 0;
}
