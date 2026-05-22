#include <iostream>

template <typename T>
T add (T x, T y){
    return x + y;
}

int main(){
    using namespace std;
    cout << add <int> (10, 20) << endl;
    cout << add <string> ("Hello " , "world!") << endl;
}
