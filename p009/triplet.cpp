#include <iostream>
#include <cmath>

using namespace std;

// Returns solution for b of: a + b + sqrt(a^2 + b^2) = 1000
double b(int a){
	return (1000.0 * (a - 500.0)) / (a - 1000.0);
}

int main(){
	int a = 0;
	double tmp;
	while(1){
		tmp = b(a);
		if(tmp == ceil(tmp) && a < tmp && tmp < sqrt(a * a + tmp * tmp))
			break;

		a++;
	}

	cout << "a=" << a << endl;
	cout << "b=" << tmp << endl;
	cout << "c=" << sqrt(a * a + tmp * tmp) << endl;
	return 0;
}
