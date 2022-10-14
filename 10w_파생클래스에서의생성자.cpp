#include<iostream>
using namespace std;
#include<string>
class opt1{
	int x;
public: opt1(int face) {
	x=face;
	cout <<"created face status"<<endl;
}
	  void display1() {
		  cout << "character's face:" << x << endl;
	  }
};

class opt2 {
	int y;
	int a, b, c;
public: opt2(int body):a(body),b(2*body),c(body*body) {
	y = body;
	cout << "created body status"<<endl;
}
	  void display2() {
		  cout << "character's body:" << y << endl;
		  cout << "house size(width,length,height): (" << a <<"," << b <<"," << c<<")"<<endl;
	  }
};

class character: public opt1, public opt2 {
	string name;
	int axix_x;
	int axix_y;
public: character(string z, int a, int b) :opt1(a*a), opt2(2*b),axix_x(a),axix_y(b){
	name = z;
}
	  void show() {
		  cout << "name:" << name << endl;
		  opt1::display1();
		  opt2::display2();
		  cout << "character's coordinate:(" << axix_x << "," << axix_y << ")" << endl;
	  }
};

int main() {
	character c1 = character("james", 10, 5), c2("john",5,10);
	c1.show();
	c2.show();
	c1.display2();
	return 0;
}