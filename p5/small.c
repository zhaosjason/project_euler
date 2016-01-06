#include <stdio.h>

int divisible(int num){
	int i;
	for(i = 2; i <= 20; i++){
		if(num % i)
			return 0;
	}

	return 1;
}

int main(){
	int num = 20;
	while(1){
		if(divisible(num))
			break;
		
		num++;
	}

	printf("num=%d\n", num);
	return 0;
}
