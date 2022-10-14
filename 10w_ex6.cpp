#include<iostream>
using namespace std;

class record {
	char name[10], adress[10], major[5];
public:
	void input() {
		cout << "enter your name:"; cin >> name;
		cout << "\nenter your address(state):"; cin >> adress;
		cout << "\nenter your major:"; cin >>major;
	}
	void output() {
		cout << "name:" << name << "\nadress:" << adress << "\nmajor:" << major;
	}
};

class stu1 :public record {
	int grade;
public:
	void getdata(){
		record::input();
		cout << " enter your grade:"; cin >> grade;
	}
	void out() {
		record::output();
		cout << "your grade:" << grade << endl;
	}
};

class stu2 : public record {
	int grade;
public: void get() {
	record::input();
	cout << " enter your grade:"; cin >> grade;
}
	  void outdata() {
		 record::output();
		 cout << "your grade:" << grade << endl;
	}
};

int main() {
	stu1 s1;
	stu2 s2;
	cout << "===information of student 1===\n";
	s1.getdata();

	cout << "===information of student 2===\n";
	s2.get();
	
	cout << "==student 1==\n";
	s1.out();
	cout << "==student 2==\n";
	s2.outdata();
	return 0;
}