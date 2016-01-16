N = 1000

def main():
	matrix = [[0 for x in range(N)] for x in range(N)];
	for i in range(N):
		for j in range(N):
			if j == 0:
				matrix[i][j] = i + 2;
			elif i == j:
				matrix[i][j] = 2 * matrix[i][j - 1];
			else:
				matrix[i][j] = matrix[i][j - 1] + matrix[i - 1][j];
	
	print("num=" + str(matrix[N - 1][N - 1]));



main();
