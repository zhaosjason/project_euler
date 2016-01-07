#include <iostream>

using namespace std;

int main(){
	int diff = 0;
	for(int i = 1; i <= 100; i++){
		for(int j = i + 1; j <= 100; j++){
			diff += 2 * i * j;
		}
	}
	
	cout << "diff=" << diff << endl;
	return 0;
}

/* Explanation:
 * (a + b + c + ... + z)^2 - (a^2 + b^2 + c^2 + ... + z^2)
 * 2ab + 2ac + ... + 2az + 2bc + 2bd + ... + 2bz + ... + 2yz 
 * 2(1)(2) + 2(1)(3) + ... + 2(1)(100) + 2(2)(3) + 2(2)(4) + ... + 2(2)(100) + ... + 2(99)(100)
 */

