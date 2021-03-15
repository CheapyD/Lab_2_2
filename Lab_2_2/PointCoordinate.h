#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class PointCoordinate
{
private:
	int x, y;
public:
	PointCoordinate();
	PointCoordinate(int x, int y);
	PointCoordinate(const PointCoordinate& v);
	~PointCoordinate();

	int GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(int value) { x = value; }
	void SetY(int value) { y = value; }

	PointCoordinate operator + (PointCoordinate r);
	PointCoordinate operator + (int V);
	friend PointCoordinate operator - (PointCoordinate l, PointCoordinate r);
	friend PointCoordinate operator - (PointCoordinate l, int V);
	friend PointCoordinate operator - (int V, PointCoordinate l);

	PointCoordinate& operator =(const PointCoordinate&);
	bool operator ==(const PointCoordinate& r);
	bool operator !=(const PointCoordinate& r);
	operator string() const;

	friend ostream& operator <<(ostream& out, const PointCoordinate& a);
	friend istream& operator >>(istream& in, PointCoordinate& a);
};

