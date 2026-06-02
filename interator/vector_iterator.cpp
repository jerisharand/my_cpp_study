#include <iostream>
#include <vector>

int main() {
    using namespace std;
    vector<int> v{1,2,3,4,5};
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++){
        cout << *i << endl;
    }
}
