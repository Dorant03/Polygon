#include <iostream>
#include "Poly.h"

using namespace std;

Poly::Poly()
{
	points=new List<Point>;
}
Poly::Poly(List<Point> * points)
{

}
List<Point> * Poly::getPoints()
{
	return points;
}
void Poly::addPoint(double _x, double _y)
{
	points->puchBack(Point(_x, _y));
}
void Poly::addPoint()
{
	double x; double y;
	cout<<"Enter x,y: "; cin>>x>>y;
	points->puchBack(Point(x, y));
}
Poly::~Poly()
{
	//delete [] points;
}



