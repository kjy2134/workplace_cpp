#include<iostream>
#include<string>
using namespace std;
class uni {
	string university;
public: void input() {
	cout << "enter the university name:";
	cin >> university;
}
	  void output() {
		  cout << "\nyour university:" << university;
	  }
};

class maj : virtual public uni {
	string major;
public:
	void get() {
		uni::input();
		cout << "enter your major:";
		cin >> major;
	}
	void out() {
		uni::output();
		cout << "\nyour major : " << major;
	}
};
class nat : virtual public uni {
	char nation[20];
public:
	void enter() {
		uni::input();
		cout << "enter your nation";
		cin >> nation;
	}
	void display() {
		uni::output();
		cout << "\nyour nation:" << nation;
	}
};

class grade : public maj, public nat{
	int grade;
public:
	void getdata() {
		maj::get();
		nat::enter();
		cout << "enter your grade number:";
		cin >> grade;
	}
	void show() {
		maj::out();
		nat::display();
		cout << "\nyour grade:" << grade;                                         
	}
};
int main() {
	grade g;
	g.input();                               
	g.show();
	return 0;
}