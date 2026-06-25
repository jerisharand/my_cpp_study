#include <iostream>
#include <vector>

using namespace std;

class myvector{
	private:
		int data[1000];
		int top;
	public:
		myvector() {
			top = -1;
			}
		~myvector() {};
		void push_back(int);
		void pop_back();
		void display();
};

void myvector::push_back(int d) {
	top += 1;
	data[top] = d;
}

void myvector::pop_back() {
	if (top == -1) {
		cout << "myvector is empty" << endl;
		return;
	}
	top -= 1;
}

void myvector::display() {
	if (top == -1) {
			cout << "myvector is empty" << endl;
	} else {
		for (int i = 0; i <= top; ++i) {
			cout << data[i] << endl;
			}
		}
}

int main() {
	myvector v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	v.display();
	
	v.pop_back();
	v.pop_back();
	
	v.display();
	
	return 0;
}
	
