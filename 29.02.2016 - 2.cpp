#include<iostream>
#include<cmath>
using namespace std;
struct Point2D
{
	double x;
	double y;
	void translate(double dx, double dy)
	{
		x = x + dx;
		y = y + dy;
		cout << x << " " << y << endl;
	}
	void distanceP(Point2D p1)
	{
		double result = sqrt(pow((x - p1.x), 2) + pow((y - p1.y), 2));
		cout << result;
	}
};
int main()
{   Point2D p;
	p.x = 0;
	p.y = 1;
	
	
	Point2D p1, p2;
	p1.x = 5;
	p1.y = 1;
	p.distanceP(p1);
	p.translate(2, 3);
	system("pause");
	return 0;
}
