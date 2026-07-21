#include <iostream>

int main() {
	int *ptr = new int[10];
	for (int i = 0; i < 10; ++i) {
		ptr[i] = (i + 10);
	}
	for (int i =0; i < 10; ++i) {
		std::cout << ptr[i] << std::endl;
	}
	delete[] ptr;   // to delete all the 10 elements
	return 0;
}
