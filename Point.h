<<<<<<< HEAD
#pragma once
#include <iostream>
#ifdef Point_EXPORTS
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
	Point_API Point(const Point &ob);
	Point_API Point(double _x, double _y);
	Point_API double getX()const;
	Point_API void setX(double x);
	Point_API void setY(double y);
	Point_API double getY()const;
	Point_API Point& operator=(const Point &ob);
	Point_API Point operator+(const Point &ob);
	Point_API Point& operator+=(const Point &ob);
	Point_API Point operator-(const Point &ob);
	Point_API Point& operator-=(const Point &ob);
	Point_API Point operator*(double k);
	Point_API Point& operator*=(double k);
	Point_API ~Point();
};
=======
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
>>>>>>> origin/Miroslava
