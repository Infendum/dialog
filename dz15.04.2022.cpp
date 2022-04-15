
#include <iostream>
#include <cmath>




class point
{
public:
	point();
	point(int x, int y);
	int get_x();
	int get_y();
	void show();

private:
	int _x;
	int _y;
};
const size_t SIZE = 100;


point::point()
{
	_x = 0;
	_y = 0;
}

point::point(int x, int y)
{
	_x = x;
	_y = y;
}

int point::get_x()
{
	return _x;
}

int point::get_y()
{
	return _y;
}

void point::show()
{
	std::cout << _x << " - " << _y << std::endl;
}



class points
{
public:
	points();
	void set_point(point pnt);
	void show();
	void find();



private:
	point _points[SIZE];
	size_t _index;
};

points::points()
{
	_index = 0;
}

void points::set_point(point pnt)
{
	if (_index < SIZE) {
		_points[_index] = pnt;
		_index++;
	}
}

void points::show()
{
	for (size_t i = 0; i < SIZE; i++) {
		_points[i].show();
	}
}

void points::find()
{
	int sum = 0;
	int perem;
	int gt_x1 = 0;
	int gt_x2 = 0;
	int gt_y1 = 0;
	int gt_y2 = 0;
	int result;
	int min = 0;
	for (size_t i = 0; i < SIZE; i++) {
		gt_x1 = _points[i].get_x();
		gt_y1 = _points[i].get_y();
		for (size_t j = 0; j < SIZE; j++) {
			gt_x2 = _points[j].get_x();
			gt_y2 = _points[j].get_y();
			result = sqrt(pow((gt_x1 - gt_x2), 2) + pow((gt_y1 - gt_y2), 2));
			sum += result;
		}
		if (sum < min || i == 0) {
			std::cout << sum << "++++++" << std::endl;
		}
	}
	std::cout << min << "---------" << std::endl;
	
}



int main()
{
	srand(time(NULL));

	points pnts;

	for (size_t i = 0; i < SIZE; i++)
	{
		point pnt(rand() % SIZE, rand() % SIZE);
		pnts.set_point(pnt);

	}
	pnts.show();
	pnts.find();
}
