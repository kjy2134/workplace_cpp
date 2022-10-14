#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1("road"), s2("read"), s3("red");
	cout << "S1,s2,s3 : " << s1 << "\t" << s2 << "\t" << s3;
	int x = s1.compare(s2);
	if (x == 0)
		cout << "s1==s2" << "\n";
	else if (x > 0)
		cout << "s1>s2" << "\n";
	else cout << "s1 < s2" << "\n";

	s2.assign(s1);

	cout << "s2:" << s2;
	s1[0] = 'v';
	cout << s1;
	s1.append("fdfdf");
	cout << s1;
	string s2;



}