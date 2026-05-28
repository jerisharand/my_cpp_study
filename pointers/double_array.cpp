#include <iostream>

int main() {
    using namespace std;
    double x[] = {1.02, 2.98, 3.77, 4.56, 5.63, 6.28, 7.26, 8.94, 9.26, 10.26};
    double *p;
    
    for (int i = 0; i < 10; i++) {
        p = &x[i]; 
        cout << p << " " << *p << endl;
    }
    return 0;
}
