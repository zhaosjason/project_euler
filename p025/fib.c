#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strrev(char *str){
	//fprintf(stderr, "reversing...\n");
	char *end = str + strlen(str) / 2;
	while(str < end){
		*str ^= *end;
		*end ^= *str;
		*str ^= *end;
		++str;
		--end;
	}
	//fprintf(stderr, "reversed.\n");
}

char * add(char *a, char *b){
	char *tmp = malloc(sizeof(char) * (strlen(b) + 1));
	strrev(a);
	strrev(b);

	//fprintf(stderr, "adding... \n");	
	int i;
	int carry = 0;
	for(i = 0; i < strlen(a); ++i){
		int num = (a[i] - '0') + (b[i] - '0') + carry;
		tmp[i] = num % 10;
		carry = num / 10;
	}

	int num = carry;
	if(strlen(b) > strlen(a))
		num += b[i] - '0';

	sprintf(&tmp[i], "%d", num);
	//fprintf(stderr, "added.\n");
	strrev(tmp);
	return tmp;
}	

int fib(char *a, char *b, int digits, int i){
	if(strlen(b) == digits)
		return i;

	char *sum = add(a, b);
	fprintf(stderr, "%s\n", sum);
	int x = fib(b, sum, digits, i + 1);
	fprintf(stderr, "freeing...\n");
	free(sum);
	fprintf(stderr, "freed.\n");
	return x;
}

int main(){
	char a[1250] = "1";
	char b[1250] = "1";
	printf("index=%d\n", fib(a, b, 1000, 2));
	return 0;
}
