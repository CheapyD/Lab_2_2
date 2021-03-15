#include "PointCoordinate.h"

int main()
{
	PointCoordinate a(3, 5);
	PointCoordinate b(-6, 4);

	cout << "Size of class: " << sizeof(a) << endl;

	PointCoordinate c = a + b;
	cout << "c = " << c << endl;

	PointCoordinate d = a - b;
	cout << "d = " << d << endl;

	if (a == b)
		cout << "Coordinates are same" << endl;
	else
		cout << "Coordinates are not same" << endl;

	PointCoordinate A, B;
	cin >> A >> B;
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;

	if (A != B)
		cout << "Cooridanetes are not same" << endl;
	else
		cout << "Coordinate are same" << endl;

	int V;
	cout << "number = "; cin >> V;
	PointCoordinate C = A + V;
	cout << "C = " << C << endl;

	PointCoordinate D = B - V;
	cout << "D = " << D << endl;

	PointCoordinate E = V - B;
	cout << "E = " << E << endl;
}