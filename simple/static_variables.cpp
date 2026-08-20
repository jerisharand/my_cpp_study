#include <iostream>

void counterFunction(){
	static int count = 0;
	count++;
	std::cout << count << std::endl;
}

int main(){
	counterFunction();
	counterFunction();
	counterFunction();
	return 0;
}
