#include <iostream>

int main() {
    using namespace std;
    int x[] = {1,2,3,4,5};
    int *p = &x[0];
    cout << p[0] << endl;
    cout << *p << " " << x[0] << endl;
    p = p + 1;
    cout << *p << endl;
    return 0;
    
}
