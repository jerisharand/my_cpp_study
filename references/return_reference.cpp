#include <iostream>

 /* Can be returned as reference:
          1. global variables
          2. heap variables
          3. references that are passed as arguments
          4. static variables
 */


int& min(int& a, int&b) { 
  if (a < b) {
		return a;
	} else {
		return b;
	}
}

int main() {
	int x,y;
	
	std::cout << "Enter the first no. : ";
	std::cin >> x;
	std::cout << "Enter the second no. : ";
	std::cin >> y;
	int& c = min(x,y);
	c = 45;
	std::cout << x << " " << y << " " << c << std::endl;	
	return 0;
}
