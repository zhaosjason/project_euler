#include <iostream>

#define N 20

using namespace std;

long numPaths(int x, int y, long i){
	if(x == N && y == N)
		return i + 1;

	if(x < N)
		i = numPaths(x + 1, y, i);
	if(y < N)
		i = numPaths(x, y + 1, i);

	return i;
}

int main(){
	long num = numPaths(0, 0, 0);
	cout << "num=" << num << endl;
	return 0;
}
