#include "Rectangle.h"


Rectangle::Rectangle()
{

}

Rectangle::Rectangle(double x, double y, double length, double width)
{
	this->SetX(x);
	this->SetY(y);
	this->SetLength(length);
	this->SetWidth(width);
}

void Rectangle::SetX(double x)
{
	this->_x = x;
}

void Rectangle::SetY(double y)
{
	this->_y = y;
}

void Rectangle::SetLength(double length)
{
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	this->_width = width;
}

double Rectangle::GetX()
{
	return this->_x;
}

double Rectangle::GetY()
{
	return this->_y;
}

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}