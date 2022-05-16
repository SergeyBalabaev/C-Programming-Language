#include <iostream>
#include <vector>
using namespace std;

struct vect
{
	int x;
	int y;
};

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
	V3.x = V1.x + V2.x;
	V3.y = V1.y + V2.y;
	disp_vextor(V3);
	return 0;
}
