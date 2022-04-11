#include "Triangle.h"

Triangle::Triangle(int aSide, int bSide, int cSide)
{
	side_1 = aSide;
	side_2 = bSide;
	side_3 = cSide;
}


int Triangle::getSide_1()
{
	return side_1;
}


int Triangle::getSide_2()
{
	return side_2;
}


int Triangle::getSide_3()
{
	return side_3;
}


double Triangle::calculatePerimeter()
{
	return(side_1 + side_2 + side_3);
}


double Triangle::calculateArea()
{
	double p;
	p = (this->calculatePerimeter()) / 2;
	double area;
	area = sqrt(p * (p - side_1) * (p - side_2) * (p - side_3));
	return area;
}


Triangle Triangle::operator+(Triangle& triangle)
{
	int resultSide_1 = side_1 + triangle.getSide_1();
	int resultSide_2 = side_2 + triangle.getSide_2();
	int resultSide_3 = side_3 + triangle.getSide_3();

	if (resultSide_1 + resultSide_2 > resultSide_3 &&
		resultSide_1 + resultSide_3 > resultSide_2 &&
		resultSide_2 + resultSide_3 > resultSide_1)
	{
		return Triangle(resultSide_1, resultSide_2, resultSide_3);
	}
	else
	{
		return Triangle(side_1, side_2, side_3);
	}
}


Triangle Triangle::operator-(Triangle& triangle)
{
	int resultSide_1 = side_1 - triangle.getSide_1();
	int resultSide_2 = side_2 - triangle.getSide_2();
	int resultSide_3 = side_3 - triangle.getSide_3();

	if (resultSide_1 + resultSide_2 > resultSide_3 &&
		resultSide_1 + resultSide_3 > resultSide_2 &&
		resultSide_2 + resultSide_3 > resultSide_1)
	{
		return Triangle(resultSide_1, resultSide_2, resultSide_3);
	}
	else
	{
		return Triangle(side_1, side_2, side_3);
	}
}