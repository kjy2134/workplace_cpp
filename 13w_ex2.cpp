#include<iostream>
#include<vector>

using namespace std;

int main() {
	double arr[] = { 1.1,1.2,1.3,1.4 };
	vector <double>v1(arr, arr + 4);
	vector <double>v2(4);
	v1.swap(v2);

	while (!v2.empty()) {
		cout << v2.back() << ' ';
		v2.pop_back();
	}
	return 0;
}