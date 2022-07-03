#include "CollisionManager.h"


bool CollisionManager::IsCollision(Rectangle& rectangle1, Rectangle& rectangle2)
{
    double dX = abs(rectangle1.GetCenterPoint().GetX() 
        - rectangle2.GetCenterPoint().GetX());
    double dY = abs(rectangle1.GetCenterPoint().GetY() 
        - rectangle2.GetCenterPoint().GetY());
    double lengthDifference = abs(rectangle1.GetLength()
        + rectangle2.GetLength());
    double widthDifference = abs(rectangle1.GetWidth() 
        + rectangle2.GetWidth());
    if ((dX < (lengthDifference) / 2) && (dY < (widthDifference) / 2))
    {
        return true;
    }
    return false;
}

bool CollisionManager::IsCollision(Ring& ring1, Ring& ring2)
{
    double dX = abs(ring1.GetPoint().GetX()
        - ring2.GetPoint().GetX());
    double dY = abs(ring1.GetPoint().GetY()
        - ring2.GetPoint().GetY());
    double c = sqrt(dX * dX + dY * dY);
    if (c < (ring1.GetOuterRadius() + ring2.GetOuterRadius()))
    {
        return true;
    }
    return false;
}
