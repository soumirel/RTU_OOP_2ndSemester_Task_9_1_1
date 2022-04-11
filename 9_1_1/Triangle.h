#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include <cmath>

class Triangle {
private:
	int side_1, side_2, side_3;
public:
	Triangle(int aSide, int bSide, int cSide);
	int getSide_1();
	int getSide_2();
	int getSide_3();

	double calculatePerimeter();
	double calculateArea();

	Triangle operator+(Triangle& triangle);
	Triangle operator-(Triangle& triangle);
};




#endif
