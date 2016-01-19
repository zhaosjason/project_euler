def main():
	month = 0;
	year = 1900;
	weekday = 0;

	months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
	
	while year < 1901:
		days = months[month];
		if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
			days += 1;
		
		weekday = (weekday + days % 7) % 7;

		month += 1;
		if month == 12:
			year += 1;
			month = 0;

	sundays = 0;
	while year <= 2000:
		if weekday == 6:
			sundays += 1;

		days = months[month];
		if year % 4 == 0 and month == 1 and (year % 100 != 0 or year % 400 == 0):
			days += 1;
		
		weekday = (weekday + days % 7) % 7;

		month += 1;
		if month == 12:
			year += 1;
			month = 0;
	
	print("sundays=" + str(sundays));
	

main();
