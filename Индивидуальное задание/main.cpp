#include <iostream>
#include "FigureAligner.h"
#include "Rectangle.h"

using namespace std;

const int rectanglesCount = 4;

int main()
{
	Rectangle* rectangles = new Rectangle[rectanglesCount];
	for (int i = 0; i < rectanglesCount; i++)
	{
		rectangles[i] = Rectangle(rand() % 10, rand() % 15, rand() % 20, rand() % 25);
	}
	for (int i = 0; i < rectanglesCount; i++)
	{
		cout << "Rectangle [" << i + 1 << "]: \n";
		cout << "X = " << rectangles[i].GetX() << "\t";
		cout << "Y = " << rectangles[i].GetY() << "\t";
		cout << "Length = " << rectangles[i].GetLength() << "\t";
		cout << "Width = " << rectangles[i].GetWidth() << "\t";
		cout << endl;
	}
	cout << endl << endl;
	Rectangle* centerRectangle = new Rectangle(rand() % 30, rand() % 35, rand() % 40, rand() % 45);
	cout << "Center Rectangle: \n";
	cout << "X = " << centerRectangle->GetX() << "\t";
	cout << "Y = " << centerRectangle->GetY() << "\t";
	cout << "Length = " << centerRectangle->GetLength() << "\t";
	cout << "Width = " << centerRectangle->GetWidth() << "\t";
	cout << endl << endl;
	FigureAligner* figureAligner = new FigureAligner();
	figureAligner->AlignByRectangleCenter(rectangles, rectanglesCount, centerRectangle);
	for (int i = 0; i < rectanglesCount; i++)
	{
		cout << "Rectangle [" << i + 1 << "]: \n";
		cout << "X = " << rectangles[i].GetX() << "\t";
		cout << "Y = " << rectangles[i].GetY() << "\t";
		cout << "Length = " << rectangles[i].GetLength() << "\t";
		cout << "Width = " << rectangles[i].GetWidth() << "\t";
		cout << endl;
	}
	cout << endl;
	delete[] rectangles;
	delete centerRectangle;
	delete figureAligner;
	system("pause");
	return 0;
}




//����������� ���� � ��� ���� ������, ����� ��� ���� �������� ������� ������.

//����������� ������ � ��� ������ ������, ���������� �� �� ���� ����������� �������, � ���������� ��
//���� ������, ���� ��� ������� ���������� �������� ������� ������

//��������� ����� �
//��� �����, ��� �������, �� ������� �����, � ��������������� ���������������, ����� ������������ ������ ��� ������ �������.//����, ��������� ���� �� �����, ������ ��������������� ������, ����� ���� ������//������������� � �������������� ���� ��������, ��� ������� ���� ������ ���������� � ����� ��� �������
//������� ������� �� ����� ���������� ����������� �������.//������������� ����� ���� � ����� �� ��� ��������� :
//� ����� ������ ��������� ������� ������� ������ � �������� ����������(��� � ������� ����);
//� ����� ������ ���������� ������� ������� ������(��������, ���� �� ����� � ������ ������ ��������� ����� ������ �������, �� ������� ���� ������������� ������);
//� ����� ������ ������� ������ ���� ������� ������� ������, �� ������� ������������ ��� ���������� ������.