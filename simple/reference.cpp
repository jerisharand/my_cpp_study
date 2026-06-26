#include <iostream>

void swap(int &x, int &y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    
}

int main() {
    using namespace std;
    int a,b;
    a = 50;
    b = 60;
    cout << a << " " << b << endl;
    swap(a,b);
    cout << "--- After swapping ---" << endl;
    cout << a << " " << b << endl;
}
