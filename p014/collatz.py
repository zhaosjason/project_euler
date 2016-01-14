def calcLength(num, i):
	i += 1;

	if num == 1:
		return i;

	if num % 2 == 0:
		num = num / 2;
	else:
		num = 3 * num + 1;

	return calcLength(num, i);

def main():
	maxNum = 0;
	maxLen = 0;
	for i in range(1,999999):
		len = calcLength(i, 0);
		if len > maxLen:
			maxNum = i;
			maxLen = len;
	
	print("max=" + str(maxNum));

main();
