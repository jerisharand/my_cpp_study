#include <iostream>

int add (int x, int y) {
    return x+y;
}

double add (double x, double y) {
    return x + y;
}

int main() {
    using namespace std;
    cout << add (10,20) << endl;
    cout << add (10.5, 20.7) << endl;
    return 0;
}
