#include <stdio.h>

int isprime(int num) {
	int i;
	for(i = 2; i <= num / 2; ++i) {
		if(num % i == 0) {
			return 0;
		}
	}

	return 1;
}

int numPrimes(int a, int b) {
	int n = 0;
	int temp;
	while((temp = n * n + a * n + b) > 1 && isprime(temp)) {
		++n;
	}

	return n;
}

int main() {
	int a;
	int b;
	int max = 0;
	int ab;

	for(a = -999; a <= 999; ++a) {
		for(b = -999; b <= 999; ++b) {
			int temp;
			if((temp = numPrimes(a, b)) > max) {
				max = temp;
				ab = a * b;
			}
		}
	}

	printf("prod=%d\n", ab);
	return 0;
}
