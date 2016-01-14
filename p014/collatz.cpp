#include <iostream>

using namespace std;

int calcLength(long num, int i){
	if(num == 1)
		return ++i;

	if(num % 2 == 0)
		num = num / 2;
	else
		num = 3 * num + 1;

	return calcLength(num, ++i);
}

int main(){
	int maxNum = 0;
	int maxLen = 0;
	for(int i = 1; i < 1000000; i++){
		int len = calcLength((long) i, 0);
		if(len > maxLen){
			maxNum = i;
			maxLen = len;
		}
	}
	
	cout << "max=" << maxNum << endl;
}
