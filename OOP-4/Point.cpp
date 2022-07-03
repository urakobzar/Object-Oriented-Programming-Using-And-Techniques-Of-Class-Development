#include "Point.h"

Point::Point()
{
}

Point::Point(double x, double y)
{
	this->SetX(x);
	this->SetY(y);
}

void Point::SetX(double x)
{
	this->_x = x;
}

void Point::SetY(double y)
{
	this->_y = y;
}

double Point::GetX()
{
	return this->_x;
}

double Point::GetY()
{
	return this->_y;
}
