#include <iostream>

int main() {
    using namespace std;
    bool x[] = {true, false,true,false,true,false,true,false,true,false};
    bool *p;
    
    for(int i = 0; i < 10; i++) {
        p = &x[i];
        cout << p << " " << *p << endl;
    }
    return 0;
}
