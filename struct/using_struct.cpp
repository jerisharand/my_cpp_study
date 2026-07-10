#include <iostream>

struct point{
	int x;
	int y;
};

int main() {
	point p{44,55};
	std::cout << "( " << p.x << " , " << p.y << " )" << std::endl;
	p.x = 10;
	p.y = 20;
	std::cout << "( " << p.x << " , " << p.y << " )" << std::endl;
	return 0;
}
