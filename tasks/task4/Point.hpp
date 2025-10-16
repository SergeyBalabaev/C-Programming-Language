class Point {
public:
	Point();
	~Point();
	Point(int, int);
	Point(const Point& T);
	Point(Point&& T) noexcept;
	Point& operator=(const Point& other) ;
	Point& operator=(Point&& other) noexcept;
	void print();
	
private:
	int x;
	int y;
};