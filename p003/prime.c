#include <stdio.h>

int isprime(long num){
	long i = 2;
	while(i < num){
		if(num % i == 0)
			return 0;

		i++;
	}

	return 1;
}

long fact(long num){
	long n = 2;
	while(num % n != 0 || !isprime(n)){
		n++;
	}

	return n;
}

int main(){
	long num = 600851475143;
	long lpf;

	while((lpf = fact(num)) != num){ 
		num = num / lpf; 
	}

	printf("largest prime factor: %ld\n", lpf);
	return 0;
}
