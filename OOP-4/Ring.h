#pragma once
#include "Point.h"
#include "DoubleValidator.h"
#include <exception>
#include <iostream>

using namespace std;



class Ring
{
private:

	double _outerRadius;
	double _innerRadius;
	Point _point;
	static int AllRingsCount;

	void AssertOnPositiveValue(double value);

public:

	Ring();

	~Ring();

	Ring(double outerRadius, double innerRadius, Point point);

	void SetRadius(double outerRadius, double innerRadius);

	void SetPoint(Point point);

	double GetArea();

	double GetOuterRadius();

	double GetInnerRadius();

	Point GetPoint();

	static int GetAllRingsCount();
};
