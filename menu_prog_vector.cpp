#include <iostream>
#include <vector>

using namespace std;

int main() {
	int choice;
	vector<int> v;
	
	while (true) {
		cout << "1 : add to vector" << endl;
		cout << "2 : pop from vector" << endl;
		cout << "3 : display vector" << endl;
		cout << "4 : exit" << endl; 
		cin >> choice;
		
	if (choice == 1) {
		int num;
		cin >> num;
		v.push_back(num);
		}
	if (choice == 2) {
		v.pop_back();
		}
	if (choice == 3) {
		for (int x : v) {
			cout << x << " \n" ; 
			}
		}
	if (choice == 4) {
		break;     // comes out of the loop
		}
	}
	return 0;
	
}	
