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
	List<Point> * points;
public:
	Polygon_API Poly();
	Polygon_API Poly(List<Point> * points);
};