#include <iostream>
#include "Band.h"
#include "Ring.h"
#include "Rectangle.h"
#include "CollisionManager.h"
#include "GeometricProgram.h"

using namespace std;


enum MaimMenu
{
	BandTask = 1,
	RingTask = 2,
	RectangleTask = 3,
	CollisionTask = 4,
	Exit = 5
};

int ReadingCorrectSize()
{
	int size;
	while (true)
	{
		cin >> size;
		if (size <= 0)
		{
			cout << "Unfortunately, you made a mistake\n";
			cout << "(The initial number must be an integer";
			cout << " greater than 0)\n";
			cout << "Enter again: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return size;
}

int main()
{
	while (true)
	{
		cout << "\n\n\t||MAIN MENU||\n\n";
		cout << "\nPlease enter a number between 1 and 6: \n";
		cout << "\nLoad DemoBand: 1";
		cout << "\nLoad DemoRing: 2";
		cout << "\nLoad DemoRectangleWithPoint: 3";
		cout << "\nLoad DemoCollision: 4";
		cout << "\nExit program: 5";
		cout << "\nMake your choice: ";
		int menuNumber = ReadingCorrectSize();
		cout << endl << endl << endl;
		switch (menuNumber)
		{
			case BandTask:
			{
				cout << "\n\nDemoBand\n";
				Band band;
				band.DemoBand();
				break;
			}
			case RingTask:
			{
				cout << "\n\nDemoRing\n";
				GeometricProgram geometricProgram;
				geometricProgram.DemoRing();
				break;
			}
			case RectangleTask:
			{
				cout << "\n\nDemoRectangleWithPoint\n";
				GeometricProgram geometricProgram;
				geometricProgram.DemoRectangle();
				break;
			}
			case CollisionTask:
			{
				cout << "\n\nDemoCollision\n";
				GeometricProgram geometricProgram;
				geometricProgram.DemoCollision();
				break;
			}
			case Exit:
			{
				cout << endl;
				system("pause");
				return 0;
			}
			default:
			{
				cout << "You made a mistake. Try again";
				break;
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}