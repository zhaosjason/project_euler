#include <iostream>

using namespace std;

int amicable(int num){
	int sum = 0;
	int last = 0;
	for(int i = 2; i < num; i++){
		if(last == i)
			break;

		if(num % i){
			last = num / i;
			sum += i + last;
		}
	}

	sum++;
	return sum;
}

int isAmicable(int num){
	if(amicable(amicable(num)) == num)
		return 1;

	return 0;
}

int main(){
	int sum = 0;
	for(int i = 1; i < 10000; i++){
		cout << i << endl;
		if(isAmicable(i))
			sum += i;
	}

	cout << "sum=" << sum << endl;
	return 0;
}
