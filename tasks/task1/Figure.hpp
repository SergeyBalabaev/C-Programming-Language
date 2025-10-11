#include "Point.hpp"

class Figure {
public:
	Figure();
	Figure(const Figure& other);
	Figure(Figure&& other) noexcept;
	Figure& operator=(const Figure& other);
	Figure& operator=(Figure&& other) noexcept;
    void addPoint(const Point& p);
	~Figure();

private:
	Point* parr;
	int size;
};