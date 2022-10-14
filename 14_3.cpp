
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1("12345");
	string s2("abcde");
	string s3;
	cout << "Original String are : \n";
	cout << "S1: " << s1 << "\n";
	cout << "S2: " << s2 << "\n\n";

	// inserting a string into another
	cout << "Place S2 inside S1 \n";
	s1.insert(4, s2);
	cout << "Modified S1: " << s1 << "\n\n";

	// Removing characters in a string
	cout << "Remove 5 Character from S1 \n";
	s1.erase(4,5);
	cout << "Now S1: " << s1 << "\n\n";
	s3 = s1.back();
	cout << "s1 end:" << s3;
	// Replacing characters in a string
	cout << "Replace Middle 3 Characters in S2 with S1 \n";
}
