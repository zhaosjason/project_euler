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
		printf("%c ", nums[i]);
	}

	printf("\n");

	i = 0;
	while(n > 0){
		int num = fact(n);
		int temp = index / num;
		str[i++] = nums[temp];
		
		int j = temp;
		while(j < n){
			nums[j] = nums[j + 1];
			++j;
		}

		index -= temp * num;
		--n;
	}

	str[i] = nums[0];
	printf("num=%s\n", str);
	free(nums);
	return 0;
}


/* some scratch work

1234
1243
1324
1342
1423
1432 -
2134
2143
2314
2341
2413
2431 -
3124
3142   -
3214
3241   -
3412     -
3421 - - -
4123
4132
4213
4231
4312
4321 -

4th perm:
  4 / 3! = 0 => 1st
  4 / 2! = 2 => 3rd
  0 / 1! = 0 => 1st

1423

5th perm:
4! = 4 * 3!
  => 4 sections of size 3! = 6
  5 / 3! = 0  => 1st section
  	=> 3 sections of size 2! = 2
  	5 / 2! = 2 => 3rd section

  	1 / 1! = 1 => 2nd section

1234

1432

17th perm:
4! = 4 * 3!
  => 4 sections of size 3! = 6
  which section is 17th perm in?
  17 / (3!) = 2  => 3rd section
	=> 3 sections of size 2! = 2
	which section is 17th perm in?
	17 - (3! * 2) = 5
	5 / (2!) = 2  => 3rd section
	  => 2 sections of 1! = 1
	  1 / (1!) = 1 => 2nd section

1234

3421

*/
