#pragma once
#include "Point.h"
#include "List.h"
#ifdef Stack_EXPORTS
#define Polygon_API __declspec(dllexport) 
#else
#define Polygon_API __declspec(dllimport) 
#endif 
class Poly
{
protected:
	Point *points;
	int n;
public:
	Polygon_API Poly();
	Polygon_API Poly(const Poly &ob);
	Polygon_API Point * getPoints()const;
	Polygon_API int getN()const;
	Polygon_API void setPoints_N(Point *, int);
	Polygon_API void setN(int);
	Polygon_API Point center();
	Polygon_API void setValue(Point _point, int i);
	Polygon_API void addPoint(double _x, double _y);
	Polygon_API void addPoint();
	Polygon_API Poly& operator=(const Poly &poly);
	Polygon_API Poly operator+(const Point &delta);
	Polygon_API Poly& operator+=(const Point &delta);
	Polygon_API Poly operator*(double k);
	Polygon_API Poly& operator*=(double k);
	Polygon_API ~Poly();
};