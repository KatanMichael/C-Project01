// C-Project01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Circle.h"
#include "Point.h"
#include "Collection.h"

#include <iostream>
using namespace std;



int main()
{

	Collection c(5, 2, 4, 2);
	Point p(7, 9);

	c.getCircleAt(p).print();
	


}

