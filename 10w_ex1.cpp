#include<iostream>
using namespace std;
class math {

public: int sum(int a,int b) {
	return a+ b;
}	int sub(int a,int b) {
	return a - b;
} 
};
class math_io : public math{ //mathŬ������ ��ӵǴ� ���Ŭ���� math_io�� public���� ����.����
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
	



