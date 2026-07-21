#include <iostream>

class dummy {
	public:
		dummy() {
			std::cout << "Dummy constructor\n";
		}
		~dummy() {
			std::cout << "Dummy destructor\n";
		}
};

int main() {
	dummy *x;
	x = new dummy;
	std::cout << sizeof(*x) << std::endl;
	delete x;
	return 0;
}
