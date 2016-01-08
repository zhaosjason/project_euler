#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int isprime(int num){
	for(int i = 2; i < num; i++){
		if(num % i == 0)
			return 0;
	}
	
	return 1;
}

int main(){
	int i = 0;
	int prime = 2;
	while(i < 10001){
		if(isprime(prime))
			i++;

		prime++;
	}

	cout << "prime=" << --prime << endl;
	return 0;
}
