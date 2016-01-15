#include <iostream>

#define N 20

using namespace std;

int main(){
	unsigned long long num[N + 1][N + 1];
	for(int i = 1; i < N + 1; i++){
		for(int j = 1; j <= i; j++){
			if(j == 1){
				num[i][j] = i + 1;
			}
			else if(i == j){
				num[i][j] = 2 * num[i][j - 1];
			}
			else{
				num[i][j] = num[i][j - 1] + num[i - 1][j];
			}
		}
	}

	cout << "num=" << num[N][N] << endl;
	return 0;
}
