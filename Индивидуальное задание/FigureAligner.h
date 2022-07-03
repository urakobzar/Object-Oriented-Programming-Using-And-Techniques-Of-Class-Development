#pragma once
#include "Rectangle.h"



class FigureAligner
{
public:
	void AlignToPoint(Rectangle* rectangle, double x, double y);

	void AlignByRectangleCenter(Rectangle* rectangles, int rectanglesCount, Rectangle* centerRectangle);

};