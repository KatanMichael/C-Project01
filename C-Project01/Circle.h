#pragma once 
#ifndef Circle_h
#define Circle_h

#include "Point.h"
#include <iostream>
using namespace std;

class Circle
{
public:
	
	Circle(int x, int y, int r, int color);
	int getColor() const;
	void setColor(int color);
	bool contains(const Point &p) const;
	void print() const;
private:
	const Point center;
	int radius, color;	
};

#endif //Circle_h