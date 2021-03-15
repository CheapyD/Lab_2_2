#include "PointCoordinate.h"

PointCoordinate::PointCoordinate()
{
	x = 0;
	y = 0;
}

PointCoordinate::PointCoordinate(int X = 0, int Y = 0)
{
	x = X;
	y = Y;
}

PointCoordinate::PointCoordinate(const PointCoordinate& v)
{
	x = v.x;
	y = v.y;
}

PointCoordinate::~PointCoordinate()
{}

PointCoordinate::operator string () const
{
	stringstream ss;
	ss << "(" << x << ", " << y << ")" << endl;
	return ss.str();
}

PointCoordinate PointCoordinate::operator + (PointCoordinate r)
{
	PointCoordinate t(0, 0);
	t.x = this->x + r.x;
	t.y = this->y + r.y;
	return t;
}

PointCoordinate PointCoordinate::operator + (int V)
{
	PointCoordinate t(0, 0);
	t.x = this->x + V;
	t.y = this->y + V;
	return t;
}

PointCoordinate operator - (PointCoordinate l, PointCoordinate r)
{
	PointCoordinate t(0, 0);
	t.x = l.x - r.x;
	t.y = l.y - r.y;
	return t;
}

PointCoordinate operator - (PointCoordinate l, int V)
{
	PointCoordinate t(0, 0);
	t.x = l.x - V;
	t.y = l.y - V;
	return t;
}

PointCoordinate operator - (int V, PointCoordinate l)
{
	PointCoordinate t(0, 0);
	t.x = V - l.x;
	t.y = V - l.y;
	return t;
}

PointCoordinate& PointCoordinate::operator = (const PointCoordinate& r)
{
	x = r.x;
	y = r.y;
	return *this;
}
bool PointCoordinate::operator ==(const PointCoordinate& r)
{
	if (this->x == r.x && this->y == r.y)
		return true;
	else
		return false;
}
bool PointCoordinate::operator !=(const PointCoordinate& r)
{
	if (this->x != x || this->y != r.y)
		return true;
	else
		return false;
}

ostream& operator <<(ostream& out, const PointCoordinate& a)
{
	return out << string(a);
}

istream& operator >>(istream& in, PointCoordinate& a)
{
	cout << "x = "; in >> a.x;
	cout << "y = "; in >> a.y;
	return in;
}
