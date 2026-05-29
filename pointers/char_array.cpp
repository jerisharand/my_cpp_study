#include <iostream>

int main() {
    using namespace std;
    char x[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char *p;
    
    for (int i = 0; i < 10; i ++) {
        p = &x[i];
        cout << static_cast<void *>(p) << " " << *p << endl;
    }
    return 0;
}
