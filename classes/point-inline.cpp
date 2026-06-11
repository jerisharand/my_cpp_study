#include <iostream>
#include <format>
using namespace std;

class Point {
    private:
        int x_cor, y_cor;
    public:
        Point() {
            x_cor = 0;
            y_cor = 0;
        }         // inline function
        Point(int x, int y);
        void display();
        Point add(Point tmp);
        Point operator+(Point tmp);
        
};

Point::Point(int x, int y) {
    x_cor = x;
    y_cor = y;
}

void Point::display() {
    cout << format("Point : {}, {}", x_cor, y_cor) << endl;
}

Point Point::add(Point tmp) {
    Point n;
    n.x_cor = this->x_cor + tmp.x_cor;
    n.y_cor = this ->y_cor + tmp.y_cor;
    return n;
}

Point Point::operator+(Point tmp) {
    Point n;
    n.x_cor = this->x_cor + tmp.x_cor;
    n.y_cor = this->y_cor + tmp.y_cor;
    return n;
}

int main() {
    Point a1(10,20);
    Point b1(30,40);
    Point c1;
    c1 = a1.add(b1);
    c1.display();
    return 0;
}
