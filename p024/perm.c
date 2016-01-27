#include <stdio.h>
#include <stdlib.h>

int fact(int num){
	if(num == 1)
		return 1;
	
	return num * fact(num - 1);
}

int main(int argc, char **argv){
	if(argc != 3){
		printf("usage: %s [n digits] [i-th perm]\n", *argv);
		exit(1);
	}

	int n = atoi(argv[1]);
	int index = atoi(argv[2]) - 1;
	char *nums = malloc(sizeof(char) * (n + 1));
	char *str = malloc(sizeof(char) * (n + 1));

	int i;
	for(i = 0; i <= n; i++){
		nums[i] = i + '0';
	}

	i = 0;
	while(index > 0){
		int temp = index / fact(--n);
		printf("%d\n", temp);
		str[i++] = nums[temp];
		
		int j = temp;
		while(j <= n){
			nums[j - 1] = nums[j];
			++j;
		}

		index -= temp;
	}

	printf("num=%s\n", str);
	free(nums);
	return 0;
}
