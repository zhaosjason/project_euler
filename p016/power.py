i = 1000;

def main():
	sum = 0;
	num = str(2**i);
	for j in num:
		sum += int(j);

	print("sum=" + str(sum));


main();
