#include <stdio.h>

int fib(int a, int b){
	if(a >= 4000000)
		return 0;

	if(a % 2 == 0)
		return a + fib(b, a + b);
	
	return fib(b, a + b);
}

int main(){
	int sum = fib(1, 1);
	printf("sum=%d\n", sum);

	return 0;
}
