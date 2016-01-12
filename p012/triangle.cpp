#include <iostream>

using namespace std;

int numFactors(int num){
	int factors = 1;
	int last = 1;
	for(int i = 2; i <= num; i++){
		if(num % i == 0){
			if(num / i == last){
				factors *= 2;
				break;
			}

			last = i;
			factors++;
		}
	}

	return factors;
}

int main(){
	int num = 1;
	int i = 2;
	while(1){
		if(numFactors(num) > 500)
			break;

		num += i++;
	}

	cout << "num=" << num << endl;
	return 0;
}
