#include <iostream>
#include <deque>

int main() {
    using namespace std;
    deque<int> d{1,2,3,4,5};
    for (deque<int>::iterator i = d.begin(); i != d.end(); i++) {
        cout << *i << endl;
    }
}
