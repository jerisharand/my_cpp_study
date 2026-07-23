#include <iostream>

int main() {
	char operation;
	std::cin>>operation;
	
	int x, y;
	std::cin>>x>>y;
	
	switch (operation){
		case '+':
			std::cout << x + y << std::endl;
			break;
		case '-':
			std::cout << x - y << std::endl;
			break;
		case '*':
			std::cout << x * y << std::endl;
			break;
		case '/':
			std::cout << x / y << std::endl;
			break;
		default:
			std::cout << "No matches found.";
	}
	return 0;
}
