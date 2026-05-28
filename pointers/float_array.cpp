#include <iostream>

int main() {
    using namespace std;
    float x[] = {1.8, 2.3,3.9,4.1,5.9,6.5,7.2,8.6,9.4,10.3};
    float *p;
    
    for(int i = 0; i < 10; i++) {
        p = &x[i];
        cout << p << " " << *p << endl;
    }
    return 0;
}
