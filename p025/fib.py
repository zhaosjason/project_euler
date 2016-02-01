def main():
	a = 1;
	b = 1;
	i = 2;
	digits = 1000;
	while 1:
		if len(str(b)) == digits:
			break;

		tmp = a;
		a = b;
		b += tmp;
		i += 1;

	print(str(i));


main();
