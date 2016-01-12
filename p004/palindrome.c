#include <stdio.h>
#include <string.h>

int ispalindrome(int num){
	char a[10];
	sprintf(a, "%d", num);
	
	int i = 0;
	int len = strlen(a);
	while(i < len / 2){
		if(a[i] != a[len - i - 1])
			return 0;
		
		i++;
	}

	return 1;
}

int main(){
	int a, b;
	int max = 0;
	for(a = 999; a > 0; a--){
		for(b = 999; b > 0; b--){
			int num = a * b;
			if(num < max)
				break;

			if(ispalindrome(num))
				max = num;
		}
	}

	printf("max=%d\n", max);
	return 0;
}

