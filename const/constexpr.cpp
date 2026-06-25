#include <iostream>

double func() {
	constexpr double x = 45.67 * 563.45;
	return x;
}
	
int main() {
	using namespace std;
	double amt;
	amt = func();
	cout << amt << endl;
}
