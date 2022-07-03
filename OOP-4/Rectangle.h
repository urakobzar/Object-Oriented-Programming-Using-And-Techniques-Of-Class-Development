#pragma once
#include "Point.h"
#include "DoubleValidator.h"
#include <exception>
#include <iostream>

using namespace std;

class Rectangle
{
private:
	double _length;
	double _width;
	Point _centerPoint;

public:

	Rectangle();

	Rectangle(double length, double width, Point point);

	void SetLength(double length);

	void SetWidth(double width);

	void SetPoint(Point point);

	Point GetCenterPoint();

	double GetLength();

	double GetWidth();
};


