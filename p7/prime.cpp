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

int effprime(int num){
	char *str = (char *) malloc(sizeof(char) * 10);
	sprintf(str, "%d", num);
	
	int sum = 0;
	while(*str){
		sum += *str++ - '0';
	}

	str -= 2;
	int tmp = atoi(str);
	
	if(tmp % 2 == 0)
		return 0;
	else if(sum % 3 == 0)
		return 0;
	else if(tmp % 4 == 0)
		return 0;
	else if(tmp % 5 == 0)
		return 0;

	return isprime(num);
}

int main(){
	int num = 10000;
	int prime = 2;
	while(num){
		if(effprime(prime))
			num--;

		prime++;
	}

	cout << "prime=" << --prime << endl;
	return 0;
}
