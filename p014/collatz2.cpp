#include <iostream>
#include <unordered_map>

using namespace std;

int calcLength(long num, int i, unordered_map<int, int> &index){
	if(num == 1)
		return i;
	
	auto itr = index.find(num);
	if(itr == index.end()){
		int tmp = num;
		if(num % 2 == 0)
			num = num / 2;
		else
			num = 3 * num + 1;

		int len = calcLength(num, ++i, index) + 1;
		index.emplace(tmp, len);
		return len;
	}

	return itr->second;
}

int main(){
	unordered_map<int, int> index;
	index.reserve(10000);

	int maxNum = 0;
	int maxLen = 0;
	for(int i = 1; i < 1000000; i++){
		int len = calcLength((long) i, 0, index);
		if(len > maxLen){
			maxNum = i;
			maxLen = len;
		}
	}
	
	cout << "max=" << maxNum << endl;
	return 0;
}
