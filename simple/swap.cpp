#include <iostream>
#include <vector>

int main() {
	std::vector<int> numbers = {1,2,3,4,5};
	std::swap(numbers[0], numbers[1]);
	for (auto i:numbers) {
		std::cout << i << " ";
	}
	return 0;
}
