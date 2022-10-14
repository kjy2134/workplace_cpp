#include<iostream>
using namespace std;
class student
{
	int reg;
	char name[20];
	float fees;
public: void read();
	  void display();
};
void student::read()
{
	cout << "enter the register number: ";
	cin >> reg;
	cout << "enter the student name: ";
	cin >> name;
	cout << "enter the fees: ";
	cin >> fees;
}
void student::display()
{
	cout << "register number=" << reg << endl;
	cout << "student name=" << name << endl;
	cout << "student fees=" << fees << endl;
}

class student_friend :public student
{
	int age;
	char hobby[20];
public: void read();
	  void display();
};
void student_friend::read()
{
	student::read();
	cout << "Enter the age: ";
	cin >> age;
	cout << "Enter the hobby: ";
	cin >> hobby;
}
void student_friend::display()
{
	student::display();
	cout << "Age=" << age << endl;
	cout << "Hobby=" << hobby << endl;
}

int main()
{
	student s, * sp;
	sp = &s;
	student_friend t;
	sp->read();
	sp->display();
	sp = &t;
	sp->read();
	sp->display();
	return 0;
	
}
