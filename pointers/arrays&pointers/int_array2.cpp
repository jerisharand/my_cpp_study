#include <iostream>

int main() {
    using namespace std;
    
    int x[] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    
    for (int i = 0; i < 10; i++) {
        p = &x[i];
        cout << p << " " << *p << endl;
    }
    
    return 0;
}
