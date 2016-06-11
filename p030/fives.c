#include <stdio.h>
#include <math.h>

// Uncomment for debug info
//#define DEBUG 1

// Max # of digits = 6 * 9^5 = 354294 => 6 digits
#define MAX_DIGITS 6
#define POWER 5

int digits[MAX_DIGITS];

void init(void);
int num_digits(int num);

static inline int nth_digit(int num, int n) { return (num % (10 * n)) / n; }

void init(void) {
	int i, n, *ptr;

	ptr = digits;

	for (i = 0, n = 1; i < MAX_DIGITS; i++)
		*ptr++ = (n *= 10);
}

int num_digits(int num) {
	int i, *ptr;

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
	int debug_i;

	printf("digits: ");
	for (debug_i = 0; debug_i < MAX_DIGITS; debug_i++)
		printf("%d ", digits[debug_i]);

	printf("\n");

	printf("digits(8)       = %d\n", num_digits(8));
	printf("digits(14)      = %d\n", num_digits(14));
	printf("digits(20)      = %d\n", num_digits(20));
	printf("digits(123456)  = %d\n", num_digits(123456));
	printf("digits(300000)  = %d\n", num_digits(300000));
	printf("digits(87305)   = %d\n", num_digits(87305));

	printf("nth_digit(123456, n): ");
	for (debug_i = 0; debug_i < MAX_DIGITS; debug_i++)
		printf("%d ", nth_digit(123456, pow(10, debug_i)));

	printf("\n");

#endif

	int i, j, k;
	int max, digs, sum, res;
	int *ptr;

	res = 0;
	ptr = digits;

	for (i = 0, max = 9; i < MAX_DIGITS; i++) 
		max += 9 * *ptr++;

	for (i = 2; i <= max; i++) {
		for (j = sum = 0, k = 1, digs = num_digits(i); j < digs; j++, k *= 10)
			sum += pow(nth_digit(i, k), POWER);

		if (i == sum) {
			res += i;
			printf("FOUND: %d\n", i);
		}

#ifdef DEBUG
		printf("ITR: i=%d\n", i);
#endif
	}

	printf("res=%d\n", res);
	return 0;
}



















