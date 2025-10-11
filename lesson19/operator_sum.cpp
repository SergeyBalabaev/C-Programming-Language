#include <iostream>
#include <vector>
using namespace std;

struct vect
{
	int x;
	int y;
	vect operator+(vect other);
};

vect vect::operator + (vect other) {
	vect C;
	C.x = x + other.x;
	C.y = y + other.y;
	return C;
}

void disp_vextor(vect V)
{
	cout << "V.x= " << V.x << endl;
	cout << "V.y= " << V.y << endl;
}

int main()

{
	vect V1, V2, V3;
	V1.x = 1;
	V1.y = 2;
	V2.x = 1;
	V2.y = 2;
	V3 = V1 + V2;
	disp_vextor(V3);
	return 0;
}
