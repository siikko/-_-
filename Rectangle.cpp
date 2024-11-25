#include "Rectangle.h"
#include <stdexcept>
using namespace std;

Rectangle::Rectangle(double width, double length)
{
	this->length = length;
	this->width = width;
	if ((length < 0.0) || (length > 20.0))
	{
		throw invalid_argument("length°¡ ¹üÀ§¸¦ ¹þ¾î³µ¾î¿ä.");
	}
	if ((width < 0.0) || (width > 20.0))
	{
		throw invalid_argument("width°¡ ¹üÀ§¸¦ ¹þ¾î³µ¾î¿ä.");
	}

}

void Rectangle::setLength(double length)
{
	this->length = length;
	if ((length < 0.0) || (length > 20.0))
	{
		throw invalid_argument("length°¡ ¹üÀ§¸¦ ¹þ¾î³µ¾î¿ä.");
	}
}

void Rectangle::setWidth(double width)
{
	this->width = width;
	if ((width < 0.0) || (width > 20.0))
	{
		throw invalid_argument("width°¡ ¹üÀ§¸¦ ¹þ¾î³µ¾î¿ä.");
	}
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::perimeter() const
{
	return (length + width) * 2;
}

double Rectangle::area() const
{
	return length * width;
}

bool Rectangle::operator==(const Rectangle& r1) const
{
	if ((this->length) == r1.getLength() && (this->width) == r1.width)
	{
		return true;
	}
	else { return false; }
}

bool Rectangle::operator>(const Rectangle& r1)const
{
	if (r1.area() > this->area())
	{
		return false;
	}
	else
	{
		return true;
	}
}

Rectangle Rectangle::operator-(const Rectangle& r1) const
{
	Rectangle temp;
	temp.setLength(this->length - r1.length);
	temp.setWidth(this->width - r1.width);
	return temp;
}

void Rectangle::operator-=(const Rectangle& r1)
{
	this->setLength(this->length - r1.getLength());
	this->setWidth(this->width - r1.getWidth());

}







bool Rectangle::operator!=(const Rectangle& r1)const
{
	if (this->length != r1.getLength() || this->width != r1.getWidth())
	{
		return true;
	}
	else{ return false; }
}

bool Rectangle::operator<(const Rectangle& r1)const
{
	if (this->area() < r1.area())
	{
		return true;
	}
	else
	{
		return false;
	}
}

Rectangle Rectangle::operator+(const Rectangle& r1) const
{ 
	Rectangle temp;
	temp.setLength(this->length + r1.getLength());
	temp.setWidth(this->width + r1.getWidth());
	return temp;
}

void Rectangle::operator+=(const Rectangle& r1)
{
	this->setLength(this->length + r1.getLength());
	this->setWidth(this->width + r1.getWidth());
}

ostream& operator<<(ostream& output, const Rectangle& r1)
{
	output << "\"length: " << r1.getLength() << ",Width: " << r1.getWidth() << "\"" << endl;
	return output;
}