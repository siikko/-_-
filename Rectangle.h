#ifndef RECT_H
#define RECT_H
#include <iostream>

class Rectangle
{
public:
	explicit Rectangle(double = 1.0, double = 1.0);
	void setLength(double);
	void setWidth(double);
	double getLength() const;
	double getWidth() const;
	double perimeter() const;
	double area() const;

	bool operator==(const Rectangle&) const;
	bool operator>(const Rectangle&)const;
	Rectangle operator-(const Rectangle&)const;
	void operator-=(const Rectangle&);

	bool operator!=(const Rectangle&) const;
	bool operator<(const Rectangle&) const;
	Rectangle operator+(const Rectangle&)const;
	void operator+=(const Rectangle&);
	friend std::ostream& operator<<(std::ostream&, const Rectangle&);

private:
	double length;
	double width;
};

#endif 

