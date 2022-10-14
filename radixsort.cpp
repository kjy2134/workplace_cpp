#include<iostream>
using namespace std;

int main() {
	int size;
	cout << "배열 크기:";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	///////// 배열 생성 완료 ///////////

	delete[] arr;
}