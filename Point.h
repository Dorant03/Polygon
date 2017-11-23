#pragma once
#ifdef Stack_EXPORTS
#define Point_API __declspec(dllexport) 
#else
#define Point_API __declspec(dllimport) 
#endif
class Point
{
protected:
	double x;
	double y;
public:
	Point_API Point();
	//Point_API Point(istream &ob);
	Point_API Point(double _x, double _y);
	Point_API double getX();
	Point_API double getY();
	Point_API ~Point();
};
