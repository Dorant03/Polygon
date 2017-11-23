#include <iostream>
#include "Poly.h"

using namespace std;

Poly::Poly()
{
<<<<<<< HEAD
	points=new Point[50];
	n=0;
}
Poly::Poly(const Poly &ob)
{
	this->n=ob.n;
	points=new Point[50];
	for(int i=0; i<n; i++)
	{
		points[i].setX(ob.points[i].getX());
		points[i].setY(ob.points[i].getY());
	}
}
Point * Poly::getPoints()const
{
	return points;
}
int Poly::getN()const
{
	return n;
}
void Poly::setPoints_N(Point *_points, int _n)
{
	n=_n;
	for(int i=0; i<n; i++)
	{
		points[i].setX(_points[i].getX());
		points[i].setY(_points[i].getY());
	}
}
void Poly::setN(int _n)
{
	
}
void Poly::setValue(Point _point, int i)
{
	points[i]=_point;
}
void Poly::addPoint(double _x, double _y)
{
	points[n]=Point(_x, _y);
	n++;
=======
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
>>>>>>> origin/Dinarochka
}
void Poly::addPoint()
{
	double x; double y;
	cout<<"Enter x,y: "; cin>>x>>y;
<<<<<<< HEAD
	points[n]=Point(x, y);
	n++;
}
Point Poly::center()
{
	double x=0,y=0;
	for(int i=0; i<n; i++)
	{
		x+=points[i].getX();
		y+=points[i].getY();
	}
	x/=n;
	y/=n;
	return Point(x, y);
}
Poly& Poly::operator=(const Poly &ob)
{
	n=ob.getN();
	for(int i=0; i<n; i++)
	{
		points[i]=ob.getPoints()[i];
	}
	return *this;
}
Poly Poly::operator+(const Point &delta)
{
	Poly poly;
	poly.setPoints_N(points, n);
	for(int i=0; i<poly.getN(); i++)
	{
		poly.setValue(poly.getPoints()[i]+delta, i);
	}
	return poly;
}
Poly& Poly::operator+=(const Point &delta)
{
	for(int i=0; i<n; i++)
	{
		points[i]+=delta;
	}
	return *this;
}
Poly Poly::operator*(double k)
{
	Poly poly;
	poly.setPoints_N(points, n);
	for(int i=0; i<poly.getN(); i++)
	{

		poly.setValue(center()+(poly.getPoints()[i]-center())*k , i);
	}
	return poly;
}
Poly& Poly::operator*=(double k)
{
    Point point_center=center();
	for(int i=0; i<n; i++)
	{

		points[i]=point_center+(points[i]-point_center)*k;
	}
	return *this;
}
Poly::~Poly()
{
	delete [] points;
}
=======
	points->puchBack(Point(x, y));
}
Poly::~Poly()
{
	//delete [] points;
}



>>>>>>> origin/Dinarochka
