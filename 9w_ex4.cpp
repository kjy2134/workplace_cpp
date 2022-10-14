#include<iostream>
using namespace std;

template <class T>
class small {
	T a, b;
public :
	T min(T a, T b) {
		return (a > b) ? b : a;
	}
	void input() {
		cout << "enter the two model(any same type data):";
		cin >> a >> b;
	}

	void output() {
		cout << "smallest =" << min(a, b) << endl;
	}
};

int main() {
	small <int>i;
	small <float>f;
	small <char>c;
	cout << "form of integer";
	i.input();
	i.output();

	cout << "form of float";
	f.input();
	f.output();

	cout << "form of char";
	c.input();
	c.output();
	return 0;
}