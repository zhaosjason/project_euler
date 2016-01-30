#include <stdio.h>

char * add(char *a, char *b){
	char *tmp = malloc(sizeof(char) * (strlen(b) + 1));

	int i;
	int last = 0;
	for(i = 0; i < strlen(b); ++i){
		
	}

	

int fib(char *a, char *b, int digits, int i){
	if(strlen(b) == digits)
		return i;

	return fib(b, add(a, b), digits, i + 1);
}

int main(){
	char a[1250] = "1";
	char b[1250] = "1";
	printf("index=%d\n", fib(a, b, 1000, 2));
	return 0;
}
