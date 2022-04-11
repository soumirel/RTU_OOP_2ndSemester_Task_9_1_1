#include "triangle.c++"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	size_t triangleQuantity;
	vector<Triangle> trigs;

	cin >> triangleQuantity;

	int tempSide_1, tempSide_2, tempSide_3;
	for (size_t iter = 0; iter < triangleQuantity; iter++)
	{
		cin >> tempSide_1 >> tempSide_2 >> tempSide_3;
		Triangle tempTriangle(tempSide_1, tempSide_2, tempSide_3);
		trigs.push_back(tempTriangle);
	}
	size_t tNumber_1, tNumber_2;
	char op;
	while (cin >> tNumber_1 >> op >> tNumber_2)
	{
		if (op == '+')
		{
			trigs.at(tNumber_1 - 1) = trigs.at(tNumber_1 - 1) + trigs.at(tNumber_2 - 1);
		}
		else
		{
			trigs.at(tNumber_1 - 1) = trigs.at(tNumber_1 - 1) - trigs.at(tNumber_2 - 1);
		}
	}
	cout << "a = " << (trigs.at(tNumber_1 - 1)).getSide_1() << ";";
	cout << "b = " << (trigs.at(tNumber_1 - 1)).getSide_2() << ";";
	cout << "c = " << (trigs.at(tNumber_1 - 1)).getSide_3() << ".";
	return(0);
}
