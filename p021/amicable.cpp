#include <iostream>
#include <cstdlib>
#include <cmath>

#define N 10000

using namespace std;

int amicable(int num){
	int sum = 0;
	int last = 0;
	for(int i = 2; i < num; i++){
		if(last == i)
			break;

		if(num % i == 0){
			last = num / i;
			sum += i + last;
		}
	}

	sum++;
	return sum;
}

int isAmicable(int num){
	int temp = amicable(num);
	if(temp != num && amicable(temp) == num)
		return 1;

	return 0;
}

int main(){
	int sum = 0;
	for(int i = 2; i < N; i++){
		if(isAmicable(i))
			sum += i;
	}

	
	cout << "sum=" << sum << endl;
	return 0;
}

