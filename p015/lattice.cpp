#include <iostream>

#define N 20

using namespace std;

int main(){
	unsigned long long num[N][N];
	for(int i = 0; i < N; ++i){
		for(int j = 0; j <= i; ++j){
			if(j == 0){
				num[i][j] = i + 2;
			}
			else if(i == j){
				num[i][j] = 2 * num[i][j - 1];
			}
			else{
				num[i][j] = num[i][j - 1] + num[i - 1][j];
			}
		}
	}

	cout << "num=" << num[N - 1][N - 1] << endl;
	return 0;
}

/* --- Explanation for algorithm ---
 * Let N be the dimensions of the grid (N x N)
 * Let each point in the figure below represent a vertex in the grid
 *
 *
 *                5 x 5                        3 x 3
 *        +    -    -    -    -             +    -    -
 *
 *        -    +    -    -    -             -    -    -
 *
 *        -    -    +    -    -             -    -    *
 * 
 *        -    -    -    +    -
 *
 *        -    -    -    -    *
 *
 *
 * A '+' indicates a starting point and a '*' indicates an end point
 * 
 * Start by determining the number of routes from each starting 
 * point on the diagonal of the grid.  Do this from bottom-right to
 * top-left.  This can be thought of as solving smaller grids within
 * the larger grid until you end up at the original grid.
 *
 * Use these tricks to solve the grids:
 *    1. There are 2 routes in a 2 x 2 grid (this is obvious)
 *    2. There are n routes in a n x 1 grid
 *    3. The number of routes from any one point is just the sum 
 *          of its bottom and right neighbors
 *    4. The number of routes from a point on the diagonal is
 *          just 2 * its bottom neighbor (*)
 *
 *
 *                5 x 5
 *        +    -    -    -    -
 *
 *        -    20   -    -    -
 *
 *        -    10   6    -    -
 * 
 *    ... 5    4    3    2    -
 *
 *        -    -    -    -    *
 *
 *
 *   (*) This is actually the same rule as #3 because the
 *       bottom and right neighbors of a point on the diagonal
 *       are always the same
 *
 * Also, please note that a 5 x 5 vertex grid is equivalent to
 * a 4 x 4 box grid (the type mentioned in the problem), so to
 * solve the 20 x 20 grid, you would need a 21 x 21 vertex grid
 * or you could just shift everything down and to the right
 */


















