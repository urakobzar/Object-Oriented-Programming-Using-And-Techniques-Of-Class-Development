#include "Ring.h"

void Ring::AssertOnPositiveValue(double value)
{
	if (value < 0)
	{
		throw exception("Any Radius can't be negative");
	}
}

int Ring::AllRingsCount = 0;

Ring::Ring()
{

}

Ring::~Ring()
{
	Ring::AllRingsCount--;
}

Ring::Ring(double outerRadius, double innerRadius, Point point)
{

	this->SetRadius(outerRadius, innerRadius);
	this->SetPoint(point);
	Ring::AllRingsCount++;
}

void Ring::SetRadius(double outerRadius, double innerRadius)
{
	DoubleValidator::AssertPositiveValue(outerRadius);
	DoubleValidator::AssertPositiveValue(innerRadius);
	if (outerRadius <= innerRadius)
	{
		throw exception("A outer Radius can't be less than inner Radius");
	}
	this->_outerRadius = outerRadius;
	this->_innerRadius = innerRadius;
}

void Ring::SetPoint(Point point)
{
	this->_point = point;
}

double Ring::GetArea()
{
	double outerArea = this->_outerRadius * this->_outerRadius * 3.14;
	double innerArea = this->_innerRadius * this->_innerRadius * 3.14;
	return outerArea - innerArea;
}

double Ring::GetOuterRadius()
{
	return this->_outerRadius;
}

double Ring::GetInnerRadius()
{
	return this->_innerRadius;
}

Point Ring::GetPoint()
{
	return this->_point;
}

int Ring::GetAllRingsCount()
{
	return Ring::AllRingsCount;
}

