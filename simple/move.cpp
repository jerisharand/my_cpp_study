#include <iostream>
#include <vector>

void do_print(std::vector<int> a) {
	std::cout << "Vector size a = " << a.size() << std::endl;
}

int main() {
	std::vector<int> v;
	v.resize(10'00'000);
	std::cout << "Vector size v = " << v.size() << std::endl;
	do_print(std::move(v));
	std::cout << "Vector size v = " << v.size() << std::endl;
	return 0;
}
