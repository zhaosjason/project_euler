#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	if(argc != 3){
		printf("usage: %s [n digits] [i-th perm]\n", *argv);
		exit(1);
	}

	int n = atoi(argv[1]);
	int index = atoi(argv[2]) - 1;
	char *nums = malloc(sizeof(char) * (n + 1));

	int i;
	for(i = 0; i <= n; i++){
		nums[i] = i + '0';
	}


	while(index > 0){
		int temp = index / --n;
		
	}

	free(nums);
	return 0;
}
