#include <iostream>
#include <format>

using namespace std;

class Point {
    private:
        int x_cor,y_cor;
    
    public:
        Point();
        Point(int x, int y);
        void display();
};           // end class with ;

Point::Point() {
    x_cor = 0;
    y_cor = 0;
}

Point::Point(int x, int y) {
    x_cor = x;
    y_cor = y;
}

void Point::display() {
    cout << format("Point : {} , {}", x_cor, y_cor) << endl;
}

int main() {
    Point a1(10, 20);
    Point b1(30, 40);
    
    a1.display();
    b1.display();
    
    return 0;
}
