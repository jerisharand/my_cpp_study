#include <iostream>
#include <list>

int main() {
    using namespace std;
    list<int> l{1,2,3,4,5};
    for (list<int>::iterator i = l.begin(); i != l.end(); i++) {
        cout << *i << endl;
    }
    
}
