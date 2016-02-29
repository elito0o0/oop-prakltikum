#include<iostream>
#include<cmath>
using namespace std;
struct Point2D
{
	double x;
	double y;
};
Point2D translate(Point2D p, double x, double y)
{
	Point2D movedPoint;
	movedPoint.x = p.x + x;
	movedPoint.y = p.y + y;
	return movedPoint;
}
void printPoint(Point2D p)
{
	cout << p.x << " " << p.y << endl;
}
double distancePoint(Point2D p1, Point2D p2)
{
	double result = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
	return result;
}
int main()

{
	Point2D p;
	p.x = 5;
	p.y = 6;
	Point2D result = translate(p, 2, 3);
		printPoint(result);
		Point2D p1, p2;
		p1.x = 0;
		p1.y = 1;
		p2.x = 5;
		p2.y = 1;
		cout << distancePoint(p1, p2);
		system("pause");
		return 0;
}
