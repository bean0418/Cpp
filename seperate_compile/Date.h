// Date.h

#include <iostream>

#ifndef DATE_H
#define DATE_H

class Date {
public:
	explicit Date(int = 1, int = 1, int = 1900);
	Date(const Date& origin);
	std::string toString() const;
	~Date();

private:
	int month;
	int day;
	int year;
};

#endif