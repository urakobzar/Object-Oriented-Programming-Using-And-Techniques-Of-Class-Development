#pragma once
#include "Rectangle.h"
#include "Ring.h"


static class CollisionManager
{
public:

	static bool IsCollision(Rectangle& rectangle1, Rectangle& rectangle2);

	static bool IsCollision(Ring& ring1, Ring& ring2);

};
