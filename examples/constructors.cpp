#include <iostream>
#include <vector>


class Point {
public:
	Point();
	~Point();
	Point(int, int);
	Point(const Point& T);
	Point(Point&& T) noexcept;
	Point& operator=(const Point& other) ;
	Point& operator=(Point&& other) noexcept;
	int x;
	int y;
};

Point::Point() {
	std::cout << "Default constructor" << std::endl;
	x = 0;
	y = 0;
}

Point::~Point() {
	std::cout << "Destructor" << std::endl;
}

Point::Point(int _x, int _y) : x(_x), y(_y) {
	std::cout << "Parametr constructor" << std::endl;
}

Point::Point(const Point& T) {
	std::cout << "Copy constructor" << std::endl;
	x = T.x;
	y = T.y;
}


Point::Point(Point&& T) noexcept {
	std::cout << "Move constructor" << std::endl;
	x = T.x;
	y = T.y;
	T.x = T.y = 0;
}

Point& Point::operator=(Point&& other) noexcept
{
	std::cout << "= operator move" << std::endl;
	if (this == &other)
		return *this;
	this->x = other.x;
	this->y = other.y;
	other.x = other.y = 0;
	return *this;
}

Point& Point::operator=(const Point& other)
{
	std::cout << "= operator copy" << std::endl;

	if (this == &other)
		return *this;
	this->x = other.x;
	this->y = other.y;
}

int main()
{
	Point P1;
	Point P2(1,1);
	Point P3 = P2;
	Point P4 = std::move(P3);

	P3 = P1;
	P2 = std::move(P1);
}
