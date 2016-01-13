#include <iostream>
#include <fstream>
#include <string>

#define ADDENDS 100
#define DIGITS 50

using namespace std;

string calcSum(string arr[ADDENDS]){
	string sum = "";
	int carry = 0;
	for(int i = DIGITS - 1; i >= 0; i--){
		int tmp = 0;
		for(int j = 0; j < ADDENDS; j++){
			tmp += arr[j][i] - '0';
		} 
		
		tmp += carry;
		sum = to_string(tmp % 10) + sum;
		carry = tmp / 10;
	}

	return to_string(carry) + sum;
}

int main(){
	ifstream nums;
	nums.open("nums.txt");
	string arr[ADDENDS];
	
	for(int i = 0; i < ADDENDS; i++){
		string tmp;
		getline(nums, tmp);
		arr[i] = tmp;
	}

	string sum = calcSum(arr);
	cout << "sum=" << sum << endl;
	nums.close();
	return 0;
}
