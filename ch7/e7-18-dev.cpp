#include <iostream>
#include <math.h>

using namespace std;

struct Point
{
	int x;
	int y;
};

struct Triangle
{
	Point a;
	Point b;
	Point c;
};

float triangle_peremeter(int ax, int ay, int bx, int by, int cx, int cy)
{
	float d1 = sqrt( pow((bx -ax), 2) + pow((by - ay), 2) );
	float d2 = sqrt( pow((cx - ax), 2) + pow((cy - ay), 2) );
	float d3 = sqrt( pow((bx - cx), 2) + pow((by -cy), 2) );
	cout << d1 + d2 + d3;
}

int main()
{
	Triangle triangle;

	cout << "x of first point: \n";
	cin >> triangle.a.x;
	cout << "y of first point: \n";
	cin >> triangle.a.y;
	cout << "x of second point: \n";
	cin >> triangle.b.x;
	cout << "y of second point: \n";
	cin >> triangle.b.y;
	cout << "x of third point: \n";
	cin >> triangle.c.x;
	cout << "y of third point: \n";
	cin >> triangle.c.y;

	triangle_peremeter(triangle.a.x, triangle.a.y, triangle.b.x, triangle.b.y, triangle.c.x, triangle.c.y);
}



