#include <iostream>
#include <vector>

int main() {
	using namespace std;
	vector<int> v{1,2,3,4,5};
	
	for(int i : v) {
		cout << i << " " ;
	}
	cout << endl;
	
	for (int& i : v) {
		i = i * 2;
		cout << i << " " ;
	}
	cout << endl;
	
	for (int i : v) {
		cout << i << " " ;
	}
	cout << endl;
	
	return 0;
	
}
