#include <iostream>
#include <cstdlib>

using namespace std;

int isprime(int num, int *arr){
	while(*arr){
		if(num % *arr++ == 0)
			return 0;
	}

	return 1;
}

int main(){
	int *primes = (int *) malloc(sizeof(int) * 1000000);
	primes[0] = 2;
	primes[1] = 3;
	int size = 2;
	
	unsigned long sum = 2 + 3;
	for(int i = 5; i < 2000000; i++){
		if(isprime(i, primes)){
			sum += i;
			primes[size++] = i;
		}
	}
	
	cout << "sum=" << sum << endl;
	return 0;
}





