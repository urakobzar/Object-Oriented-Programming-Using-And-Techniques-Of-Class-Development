#pragma once

class Rectangle
{
private:
	double _x;
	double _y;
	double _length;
	double _width;

public:

	Rectangle();

	Rectangle(double x, double y, double length, double width);

	void SetX(double x);

	void SetY(double y);

	void SetLength(double length);

	void SetWidth(double width);

	double GetX();

	double GetY();

	double GetLength();

	double GetWidth();
};