#include <iostream>

void printBinary(int data) {
	for (int i = 31; i >= 0; --i) {
		std::cout << ((data >> i) & 1) << " ";
	}
}

int main() {
	using namespace std;
	printBinary(5);
	cout << endl;
	printBinary(2);
	cout << endl;
	cout <<"AND bitwise operator: " ;;
	printBinary(5 & 2) ;
	cout << endl;
	printBinary(5);
	cout << endl;
	printBinary(2);
	cout << endl;
	cout << "OR bitwise operator: " ;
	printBinary(5 | 2) ;
	cout << endl;
	printBinary(5);
	cout << endl;
	printBinary(2);
	cout << endl;
	cout << "XOR bitwise operator: ";
	printBinary(5 ^ 2) ;
	cout << endl;
	cout <<"Binary of 5 : " ;
	printBinary(5);
	cout << endl;
	cout << "Left shift of 5 (1 time): ";
	printBinary(5 << 1) ;
	cout << endl;
	cout << "Binary of 2 : " ;
	printBinary(2) ;
	cout << endl;
	cout  << "Right shift of 2 (1 time): " ;
	printBinary(2 >> 1);
	cout << endl;
	cout << "Negate operator of 0: ";
	printBinary(~0);
	return 0;
}
