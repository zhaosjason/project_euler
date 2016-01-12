/*
 * Prints out the sum of all the multiples of 3 or 5 below 1000.
 * Written by Jason Zhao on Jan 1, 2015.  Problem 1 of ProjectEuler.net
 */

#include <stdio.h>

int main(){
	int sum = 0;
	int i = 1;
	while(i < 334){ // 334 = ceil(1000 / 3)
		// Add a = (i * (5 + 3)) to <sum> if a < 1000 && a is !multiple of 3
		sum += i * ((i < 200 && i % 3 != 0) ? 8 : 3);
		i++;
	}

	printf("sum=%d\n", sum);
	return 0;
}
