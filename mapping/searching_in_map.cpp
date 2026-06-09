#include <iostream>
#include <map>
#include <format>
using namespace std;

int main() {
    map<string, string> names;
    names["Alfred"] = "1";
    names["Bruce"] = "2";
    names["Dave"] = "3";
    string name;
    do {
        cout << "Enter name: ";
        cin >> name;
        if (names.find(name) != names.end()){
            cout << format("{}'s number: {}", name, names.find(name) -> second) << endl;
        } else {
            cout << format("{}'s number is not found.", name) << endl;
        }
    } while (name != "end");
    
    cout << names.find("Bruce") -> second << endl;
    cout << (*names.find("Bruce")).second << endl;
    
    return 0;
    
}
