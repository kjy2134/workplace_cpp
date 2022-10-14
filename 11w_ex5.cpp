#include<iostream>
using namespace std;
class infor {
	char name[10];
	int number;

public: virtual void read() {
	cout << "enter the name:";
	cin >> name;
	cout << "\nenter the number:";
	cin >> number;
}
	  void output() {
		  cout << "name :" << name << "\nnumber:" << number << endl;
	  }
};

class extra : public infor {
	char like[20];
public:
	void read() {
		cout << "enter which you are like :" ;
		cin >> like;
	}

	void output() {
		cout << "like : " << like;
	}
};

int main() {
	infor i, *io;
	io = &i;
	io->read();
	io->output();
	extra e;
	io = &e;
	io->read();
	io->output();
	return 0;
}