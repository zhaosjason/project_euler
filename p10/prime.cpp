#include <iostream>

using namespace std;

int isprime(int num){
	for(int i = 2; i < num; i++){
		if(num % i == 0)
			return 0;
	}

	return 1;
}

int main(){
	long long sum = 2;
	for(int i = 3; i < 2000000; i += 2){
		if(isprime(i)){
			sum += i;
			cout << i << endl;
		}
	}
	
	cout << "sum=" << sum << endl;
	return 0;
}
