#include <iostream>
#include <vector>
using namespace std;

struct vect
{
	int x;
	int y;
	vect operator+(vect);
	bool operator<(vect);
	bool operator>(vect);
	void operator++();
	void operator++(int);
	void operator+();
};

vect vect::operator + (vect other) {
	vect C;
	C.x = x + other.x;
	C.y = y + other.y;
	return C;
}

bool vect::operator < (vect other) {
	return x < other.x&& y < other.y ? 1 : 0;
}

bool vect::operator > (vect other) {
	return x > other.x && y > other.y ? 1 : 0;
}

void vect::operator ++ () {
	++x;
	++y;
}

void vect::operator ++ (int) {
	x++;
	y++;
}

void vect::operator + () {
	cout << "?????" << endl;
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
	++V3;
	V3++;
	disp_vextor(V3);
	+V3;
	bool B = V1 < V3;
	cout << B << endl;
	B = V1 > V3;
	cout << B << endl;
	return 0;
}
