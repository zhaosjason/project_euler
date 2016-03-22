def main():
	arr = []
	count = 0
	for a in range(2, 101):
		for b in range(2, 101):
			num = pow(a, b);
			if num not in arr:
				arr.append(num)
				count += 1
	
	print(str(count))


main()
