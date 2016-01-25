#include <stdio.h>

#define N 28123

int isAbundant(int num){
	int sum = 0;
	int i;
	for(i = 1; i <= num / 2; ++i){
		if(num % i == 0)
			sum += i;
	}

	if(sum > num)
		return 1;

	return 0;
}

int main(){
	int nums[N];
	int abnums[N];

	int i;
	int len = 0;
	for(i = 1; i <= N; ++i){
		if(isAbundant(i)){
			abnums[len] = i;
			++len;
		}

		nums[i - 1] = i;
	}

	int j;
	for(i = 0; i < len; ++i){
		for(j = i; j < len; ++j){
			int index = abnums[i] + abnums[j];
			if(index <= N)
				nums[index - 1] = 0;
		}
	}
	
	int sum = 0;
	for(i = 0; i < N; ++i){
		sum += nums[i];
	}

	printf("sum=%d\n", sum);
	return 0;
}
