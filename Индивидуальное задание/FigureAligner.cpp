#include "FigureAligner.h"

void FigureAligner::AlignToPoint(Rectangle* rectangle, double x, double y)
{
	rectangle->SetX(x);
	rectangle->SetY(y);
}

void FigureAligner::AlignByRectangleCenter(Rectangle* rectangles, int rectanglesCount, Rectangle* centerRectangle)
{
	for (int i = 0; i < rectanglesCount; i++)
	{
		AlignToPoint(&rectangles[i], centerRectangle->GetX(), centerRectangle->GetY());
	}
}