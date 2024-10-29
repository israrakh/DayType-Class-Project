#include <iostream>
#include "dayType.h"

int main() {

	// testing default constructor 
	dayType day1;
	cout << "day at index 0 must be Sunday: " << day1.getDay() << endl;

	// test parameterized constructor 
	dayType day2(3);
	cout << "Day initialized to index 3 (Wednesday): " << day2.getDay() << endl;

	// setDay function
	day1.setDay(1); // Monday
	cout << "The current day at index 1 is: " << day1.getDay() << endl;

	// nextDay function
	cout << "The next day is: " << day1.nextDay() << endl;

	// prevDay function
	cout << "The previous day is: " << day1.prevDay() << endl;

	// Testing addDays function
	cout << "Adding 4 days to the current day(Monday), and the day after adding is: " << day1.addDays(4) << endl;
	
	day1.setDay(2); // current day set to Tuesday
	cout << "The current day is set to: " << day1.getDay() << endl;
	cout << "Adding 13 days to the current day(Tuesday), and the day after adding is: " << day1.addDays(13) << endl;

	return 0;
}