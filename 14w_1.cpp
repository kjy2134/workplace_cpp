#include<iostream>
#include<string>

using namespace std;

void display(string &str){
	cout << "size =" << str.size() << "\n";
	cout << "length =" << str.length() << "\n";
	cout << "capacity=" << str.capacity() << '\n';
	cout << "maximum size=" << str.max_size() << "\n";
	cout << "empty=" << str.empty() ? "yes":"no";
	cout << "\n";
}

int main() {
	string str1;
	cout << "initial status: \n";
	display(str1);
	cout << "enter a string \n";
	cin >> str1;
	cout << "status now:\n";
	display(str1);
	str1.resize(15);
	cout << "status after resizing : \n";
	display(str1);
	cout << "\n";
	return 0;
}