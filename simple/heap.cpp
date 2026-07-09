#include <iostream>
using namespace std;

int main() {
	int num;
	int *ptr;
	
	cout << "No. of inputs: " << endl;
	cin >> num;
	ptr = new int [num];
	for (int i = 0; i < num; ++i) {
		cin >> ptr[i];
		}
	for (int i = 0; i < num; ++i) {
		cout << ptr[i] << endl;
		}
	delete ptr;
	return 0;
	}
