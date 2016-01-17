import math;

def countLetters(num):
	letters = 0;

	tens = int(num % 100);
	if tens != 0:
		if tens <= 20:
			letters += nums[tens - 1];
		else:
			ones = int(num % 10);
			index = int(((tens - ones) / 10) + 17);
			letters += nums[index];
			if ones != 0:
				letters += nums[ones - 1];
	
	hundreds = int(math.floor(num % 1000) / 100);
	if hundreds != 0:
		letters += nums[hundreds - 1] + nums[27];
		if tens != 0:
			letters += 3;

	if num == 1000:
		letters += nums[0] + nums[28];

	return letters;
	

def main():
	sum = 0;
	for i in range(1, 1001):
		sum += countLetters(i);

	print("sum=" + str(sum));


nums = [len(num) - 1 for num in open("nums.txt", "r").readlines()];
main();
