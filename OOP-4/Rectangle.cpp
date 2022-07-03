#include "Rectangle.h"


Rectangle::Rectangle(double length, double width, Point point)
{
	this->SetLength(length);
	this->SetWidth(width);
	this->SetPoint(point);
}

Rectangle::Rectangle()
{

}

void Rectangle::SetLength(double length)
{
	DoubleValidator::AssertPositiveValue(length);
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	DoubleValidator::AssertPositiveValue(width);
	this->_width = width;
}

void Rectangle::SetPoint(Point point)
{
	this->_centerPoint = point;
}


Point Rectangle::GetCenterPoint()
{
	return this->_centerPoint;
}

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}
