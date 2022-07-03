#include "GeometricProgram.h"

void GeometricProgram::DemoRectangle()
{
    Rectangle* rectangle = new Rectangle[5];
    rectangle[0].Rectangle::Rectangle(25.4, 1.1, Point(5.0, 10.7));
    rectangle[1].Rectangle::Rectangle(50.0, 7.3, Point(12.0, -10.7));
    rectangle[2].Rectangle::Rectangle(4.7, 43.6, Point(-7.0, 16.2));
    rectangle[3].Rectangle::Rectangle(9.2, 23.9, Point(4.0, 4.0));
    rectangle[4].Rectangle::Rectangle(17.9, 38.0, Point(-3.0, -2.1));
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "X = " << rectangle[i].GetCenterPoint().GetX() << "\t";
        cout << "Y = " << rectangle[i].GetCenterPoint().GetY() << "\t";
        cout << "Length = " << rectangle[i].GetLength() << "\t";
        cout << "Width = " << rectangle[i].GetWidth() << "\t";
        cout << endl;
    }
    double xCenter = 0;
    double yCenter = 0;
    for (int i = 0; i < 5; i++)
    {
        xCenter += rectangle[i].GetCenterPoint().GetX();
        yCenter += rectangle[i].GetCenterPoint().GetY();
    }
    cout << "Xcenter = " << xCenter / 5 << "\t";
    cout << "Ycenter = " << yCenter / 5 << "\t";
    delete[] rectangle;
}


void GeometricProgram::OutputConsole(Ring* ring)
{
    cout << "\nOuter Radius: " << ring->GetOuterRadius();
    cout << "\nInner Radius: " << ring->GetInnerRadius();
    cout << "\nArea:" << ring->GetArea();
}

void GeometricProgram::DemoRing()
{
    try
    {
        cout << "\n\nRing [" << 1 << "]: ";
        Ring* rings1 = new Ring(5, -2.5, Point(1, 2));
        OutputConsole(rings1);
    }
    catch (const exception& error)
    {
        cout << endl << error.what() << " !Error!" << endl;
    }
    try
    {
        cout << "\n\nRing [" << 2 << "]: ";
        Ring* rings2 = new Ring(6, 3, Point(2, 1));
        OutputConsole(rings2);
    }
    catch (const exception& error)
    {
        cout << endl << error.what() << " !Error!" << endl;
    }
    try
    {
        cout << "\n\nRing [" << 3 << "]: ";
        Ring* rings3 = new Ring(6, 4, Point(1, 1));
        OutputConsole(rings3);
    }
    catch (const exception& error)
    {
        cout << endl << error.what() << " !Error!" << endl;
    }
    cout << "\n\nNumber of rings before calling the constructor: " << Ring::GetAllRingsCount();
    Ring* ring = new Ring(10.0, 5.0, Point(25.0, 25.0));
    cout << "\nNumber of rings after calling the constructor: " << Ring::GetAllRingsCount();
    delete ring;
    cout << "\nNumber of rings after calling the destructor: " << Ring::GetAllRingsCount();
}

void GeometricProgram::DemoCollision()
{
    Rectangle* rectangle = new Rectangle[8];
    rectangle[0] = Rectangle(10, 5, Point(0, 0));
    rectangle[1] = Rectangle(15, 5, Point(1, 1));
    rectangle[2] = Rectangle(10, 15, Point(4, 5));
    rectangle[3] = Rectangle(10, 15, Point(2, 1));
    rectangle[4] = Rectangle(1, 1, Point(1, 1));
    rectangle[5] = Rectangle(1, 1, Point(50, 5));
    rectangle[6] = Rectangle(2, 5, Point(3, 4));
    rectangle[7] = Rectangle(3, 3, Point(200, 20));
    for (int i = 0; i < 8; i++)
    {
        cout << "\nRectangle [" << i + 1 << "] : \n";
        cout << "X = " << rectangle[i].GetCenterPoint().GetX() << "\t";
        cout << "Y = " << rectangle[i].GetCenterPoint().GetY() << "\t";
        cout << "Length = " << rectangle[i].GetLength() << "\t";
        cout << "Width = " << rectangle[i].GetWidth() << "\t";
        cout << endl;
    }
    for (int i = 0; i < 8; i++)
    {
        if (i % 2 == 0)
        {
            if (CollisionManager::IsCollision(rectangle[i], rectangle[i + 1]))
            {
                cout << "\nThe rectangle [" << i + 1 << "] and rectangle [" << i + 2 << "] intersect";
            }
            else
            {
                cout << "\nThe rectangle [" << i + 1 << "] and rectangle ["
                    << i + 2 << "] do not intersect";
            }
        }
    }
    cout << endl << endl;
    Ring* ring = new Ring[8];
    ring[0] = Ring(10, 0, Point(0, 0));
    ring[1] = Ring(15, 0, Point(1, 1));
    ring[2] = Ring(10, 0, Point(4, 5));
    ring[3] = Ring(10, 0, Point(2, 1));
    ring[4] = Ring(1, 0, Point(1, 1));
    ring[5] = Ring(1, 0, Point(50, 5));
    ring[6] = Ring(2, 0, Point(3, 4));
    ring[7] = Ring(3, 0, Point(200, 20));
    for (int i = 0; i < 8; i++)
    {
        cout << "\Ring [" << i + 1 << "] : \n";
        cout << "X = " << ring[i].GetPoint().GetX() << "\t";
        cout << "Y = " << ring[i].GetPoint().GetY() << "\t";
        cout << "Radius = " << ring[i].GetOuterRadius() << "\t";
        cout << endl;
    }
    for (int i = 0; i < 8; i++)
    {
        if (i % 2 == 0)
        {
            if (CollisionManager::IsCollision(ring[i], ring[i + 1]))
            {
                cout << "\nThe ring [" << i + 1 << "] and ring [" << i + 2 << "] intersect";
            }
            else
            {
                cout << "\nThe ring [" << i + 1 << "] and ring ["
                    << i + 2 << "] do not intersect";
            }
        }
    }
    delete[] rectangle;
    delete[] ring;
}
