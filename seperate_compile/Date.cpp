// Date.cpp

#include <array>
#include <iostream>
#include <sstream>
#include "Date.h"

using namespace std;

Date::Date(int mn, int dy, int yr) 
	: month{ mn }, day{ dy }, year{ yr } {
		cout << "Date object constructor for date " << toString() << endl;
}

Date::Date(const Date& origin) {
	month = origin.month;
	day = origin.day;
	year = origin.year;

	cout << "Date objcet copy constructor for date ";
}

string Date::toString() const {
	ostringstream output;
	output << month << '/' << day << '/' << year;
	return output.str();
}

Date::~Date() {
	cout << "Date object destructor for date " << toString() << endl;
}