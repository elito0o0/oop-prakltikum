#include<iostream>
using namespace std;
class Point2D
{
   private:
	double x=3;
	double y=4;
public:
	int getX(){
		return x;
	}
	void setX(int newX)
	{
		x = newX;
	}
};
int main()
{

	Point2D p;
	cout<<p.getX()<<endl;
	p.setX(10);
	cout<<p.getX()<<endl;
	system("pause");
		return 0;
}
