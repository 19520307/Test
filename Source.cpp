#include <iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	friend istream& operator>>(istream& is, Point& A)
	{
		is >> A.x >> A.y;
		return is;
	}
	friend ostream& operator<<(ostream& os, Point A)
	{
		os << "(" << A.x << "," << A.y << ")" << endl;
		return os;
	}
};
class DaGiac
{
private:
	int n;
	Point* a;
public:
	friend istream& operator>>(istream& is, DaGiac& A)
	{
		is >> A.n;
		A.a = new Point[A.n];
		for (int i = 0; i < A.n; i++)
		{
			is >> A.a[i];
		}
		return is;
	}
	friend ostream& operator<<(ostream& os, DaGiac A)
	{
		for (int i = 0; i < A.n; i++)
		{
			os << A.a[i];
		}
		return os;
	}
};