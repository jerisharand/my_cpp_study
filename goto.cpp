#include <iostream>

using namespace std;

int main() {
	int x;
	cin >> x;
	if (x %2 == 0) {
		goto print_even;
		}
	else {
		goto print_odd;
		}
	print_even:                    // goto label
		cout << "Number is even" << endl;
		goto next;
	print_odd:                     // goto label
		cout << "Number is odd " << endl;
		goto next;
	next:
		cout << "Program complete" << endl;
	
	return 0;
}
