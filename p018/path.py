def main():
	matrix = [];
	for line in open("triangle.txt", "r"):
		matrix.append(list(map(int, line.split())));

	length = len(matrix);
	for i in range(0, length):
		for j in range(0, length - i - 1):
			index = length - i - 1;
			matrix[index - 1][j] += max(matrix[index][j], matrix[index][j + 1]);

	print("max=" + str(matrix[0][0]));


main();	
