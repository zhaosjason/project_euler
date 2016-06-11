#include <stdio.h>

// Uncomment for debug info
//#define DEBUG 1

// Max # of digits = 6 * 9^5 = 354294 => 6 digits
#define MAX_DIGITS 6

int digits[MAX_DIGITS];

void init(void) {
	int i, n;
	int *ptr;

	ptr = digits;

	for (i = 0, n = 1; i < MAX_DIGITS; i++)
		*ptr++ = (n *= 10);
}

int num_digits(int num) {
	int i;
	int *ptr;

	ptr = digits;

	for (i = 0; i < MAX_DIGITS; i++) {
		if (num < *ptr++)
			return i + 1;
	}

	return -1;
}

int main(void) {
	init();

#ifdef DEBUG
	printf("digits: ");
	int i;
	for (i = 0; i < MAX_DIGITS; i++)
		printf("%d ", digits[i]);

	printf("\n");

	printf("digits(8)       = %d\n", num_digits(8));
	printf("digits(14)      = %d\n", num_digits(14));
	printf("digits(20)      = %d\n", num_digits(20));
	printf("digits(123456)  = %d\n", num_digits(123456));
	printf("digits(300000)  = %d\n", num_digits(300000));
	printf("digits(87305)   = %d\n", num_digits(87305));
#endif

	return 0;
}
