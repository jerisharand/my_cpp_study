#include <iostream>
#include <string>

using namespace std;

int main() {
	string s = "I am sorry, Dave.";
	cout << s.insert(5, "very ") << endl;   // inserting the string at index 5
	
	s = "I am sorry, Dave";
	cout << s.erase(6,2) << endl;   // deleting 2 characters from index 6
	
	s = "I am sorry, Dave";
	cout << s.replace(12, 5, "Frank") << endl;   // replacing(pos, len, string)
	
	s = "I am sorry, Dave";
	s.resize(4);
	cout <<  s << endl;   // resizes to the given length
	
	s = "I am sorry, Dave";
	s.resize(20, '?');
	cout << s << endl;   // resizes to the given length. Uses the char to fill the space if the string expands
	
	s = "I am sorry, Dave";
	cout << s.find("r") << endl;   // first occurence of the substring from the beginning
	
	cout << s.rfind("r") << endl;   // first occurence of the substring from the end
	
	cout << s.find("a", 5) << endl;   // first occurence of char a from index 5
	
	cout << s.substr(5,6) << endl;   // substr(pos, length)
}


