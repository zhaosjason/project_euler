#include <iostream>
#include <cctype>

#define GRID_SIZE 20

using namespace std;

int findLargestProd(int grid[GRID_SIZE][GRID_SIZE]){
	int max = 0;
	for(int i = 0; i < GRID_SIZE; i++){
		for(int j = 0; j < GRID_SIZE; j++){
			if(i < GRID_SIZE - 4){
				int prod = 1;
				for(int k = 0; k < 4; k++){
					prod *= grid[i + k][j];
				}

				if(prod > max)
					max = prod;
			}

			if(j < GRID_SIZE - 4){
				int prod = 1;
				for(int k = 0; k < 4; k++){
					prod *= grid[i][j + k];
				}

				if(prod > max)
					max = prod;
			}

			if(i < GRID_SIZE - 4 && j < GRID_SIZE - 4){
				int prod = 1;
				for(int k = 0; k < 4; k++){
					prod *= grid[i + k][j + k];
				}

				if(prod > max)
					max = prod;
			}
		}
	}
	
	return max;
}

int main(){
	int grid[GRID_SIZE][GRID_SIZE];
	FILE *fd = fopen("grid.txt", "r");

	for(int i = 0; i < GRID_SIZE; i++){
		for(int j = 0; j < GRID_SIZE; j++){
			char c;
			char str[5];
			int k = 0;
			while(isdigit(c = fgetc(fd))){
				str[k++] = c;
			}

			str[k] = '\0';
			grid[i][j] = atoi(str);
		}
	}
	
	int prod = findLargestProd(grid);
	cout << "prod=" << prod << endl;
	return 0;
}
