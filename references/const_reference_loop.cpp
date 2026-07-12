#include <iostream>
#include <vector>

int main() {
    using namespace std;
    vector<int> numbers;

    for (int i = 0; i < 10; ++i) {
        numbers.push_back(i);
    }

    cout << "Original vector" << endl;
    for (int x:numbers) {
        cout << x << " ";
    }

    for (const int& x:numbers) {
        cout << x * 2 << endl;
    }

    cout << "Original vector" << endl;
    for(int x:numbers){
        cout << x << " ";
    }

    return 0;
}
