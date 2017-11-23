<<<<<<< HEAD
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
	x=0;
	y=0;
}
Point::Point(const Point &ob)
{
	this->x=ob.x;
	this->y=ob.y;
}
Point::Point(double _x, double _y)
{
	x=_x;
	y=_y;
}
double Point::getX()const
{
	return x;
}
double Point::getY()const
{
	return y;
}
void Point::setX(double _x)
{
	x=_x;
}
void Point::setY(double _y)
{
	y=_y;
}
Point Point::operator+(const Point &ob)
{
	Point point;
	point.setX(x+ob.getX());
	point.setY(y+ob.getY());
	return point;
}
Point& Point::operator+=(const Point &ob)
{
	this->x+=ob.getX();
	this->y+=ob.getY();
	return *this;
}
Point Point::operator-(const Point &ob)
{
	Point point;
	point.setX(x-ob.getX());
	point.setY(y-ob.getY());
	return point;
}
Point& Point::operator-=(const Point &ob)
{
	this->x-=ob.getX();
	this->y-=ob.getY();
	return *this;
}
Point Point::operator*(double k)
{
	Point point;
	point.setX(x*k);
	point.setY(y*k);
	return point;
}
Point& Point::operator*=(double k)
{
	this->x*=k;
	this->y*=k;
	return *this;
}
Point& Point::operator=(const Point &ob)
{
	this->x=ob.getX();
	this->y=ob.getY();
	return *this;
}
Point:: ~Point()
{
	x=0;
	y=0;
}
=======
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
	x=0;
	y=0;
}
/*Point::Point(istream &ob)
{
	ob>>x;
	ob>>y;
}*//
Point::Point(double _x, double _y)
{
	x=_x*20+500;
	y=_y*(-1)*20+300;
}
double Point::getX()
{
	return x;
}
double Point::getY()
{
	return y;
}
Point:: ~Point()
{
	x=0;
	y=0;
}
>>>>>>> origin/Miroslava
