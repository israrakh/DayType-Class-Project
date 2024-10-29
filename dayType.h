#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

using namespace std;

class dayType {

private:
	int currentDay;
	static const string daysOfWeek[7];

public:
	// Default constructor
	// Precondition: None
	// Postcondition: Initialize the current day to sunday(index 0).
	dayType();

	// Parameterized constructor
	// Precondition: Index should be between 0 to 6
	// Postcondition: Sets the current day to the given day index
	dayType(int dayIndex);

	// Set the current day
	// Precondition: dayIndex should be between 0 to 6
	// Postcondition: Sets the current day to the given day index
	void setDay(int dayIndex);

	// Get the current day
	// Precondition: None
	// Postcondition: Returns the current day.
	string getDay() const;

	// Return the next day
	// Precondition: None
	// Postcondition: Returns the name of the next day as a string
	string nextDay() const;

	// Return the previous day
	// Precondition: None
	// Postcondition: Returns the name of the previous day.
	string prevDay() const;

	// Add days to the current day
	// Precondition: d is a positive integer
	// Postcondition: Returns the name of the day after adding the d day.
	string addDays(int d) const;
};

#endif
