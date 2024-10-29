#include "dayType.h"

// Array of days
const string dayType::daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

// Default constructor
dayType::dayType() : currentDay(0) {}

// Parameterized constructor
dayType::dayType(int dayIndex) : currentDay(dayIndex % 7) {}

// Set the current day
void dayType::setDay(int dayIndex) {
	currentDay = dayIndex % 7;
}

// Get the current day
string dayType::getDay() const {
	return daysOfWeek[currentDay];
}

// Return the next day
string dayType::nextDay() const {
	return daysOfWeek[(currentDay + 1) % 7];
}

// Return previous day
string dayType::prevDay() const {
	return daysOfWeek[(currentDay + 6) % 7];
}

// Add days to the current day
string dayType::addDays(int d) const {
	int newIndex = (currentDay + d) % 7;
	return daysOfWeek[newIndex];
}
