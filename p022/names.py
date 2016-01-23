def main():
	with open("names.txt") as f:
		names = f.read().split(",");

	names.sort();

	i = 1;
	sum = 0;
	for name in names:
		name = name.replace("\"", "");
		tmp = 0;
		for letter in name:
			tmp += ord(letter) - 64;

		sum += tmp * i;
		i += 1;

	print("sum=" + str(sum));

main();
