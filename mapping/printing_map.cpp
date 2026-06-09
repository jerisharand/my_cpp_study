#include <iostream>
#include <map>
using namespace std;

int main() {
     map<string, int> names;
     names["Alfred"] = 1;
     names["Bruce"] = 2;
     names["Dave"] = 3;
     
     for (map<string, int>::iterator i = names.begin(); i != names.end(); ++i) {
         cout << i->first << " : " << i->second << endl;
         cout << (*i).first << " : " << (*i).second << endl;
     }
     return 0;
}
