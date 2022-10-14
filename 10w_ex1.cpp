#include<iostream>
using namespace std;
class math {

public: int sum(int a,int b) {
	return a+ b;
}	int sub(int a,int b) {
	return a - b;
} 
};
class math_io : public math{ //math클래스에 상속되는 상속클래스 math_io를 public모드로 선언.정의
	int x, y;
public:
	void input() {
		cout << "enter the two number for sum,sub:";
		cin >> x >> y;
	}
	void output() {
		cout << "\nresult(sum):" <<math::sum(x, y) << "\nresult(sub):" << math::sub(x, y) << endl;
	}
};
int main() {
	math_io m;
	m.input();
	m.output();
	return 0;
}
	



