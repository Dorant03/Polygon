#include <iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
	x=0;
	y=0;
}

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
