#include <iostream>
#include <list>
#include <algorithm>
#include<iterator>
using namespace std;
int main() {
	list<float> fList(5); //uninitialized list
	cout << "\nEnter 5 floating - point numbers : ";
	//istream iterators
	istream_iterator<float> first(cin); //cin
	istream_iterator<float> last; //eos
	//copy from cin to fList
	copy(first, last, fList.begin());
	cout << endl; //display fList
	ostream_iterator<float> ositer(cout, "--");
	copy(fList.begin(), fList.end(), ositer);
	cout << endl;
	return 0;
}
