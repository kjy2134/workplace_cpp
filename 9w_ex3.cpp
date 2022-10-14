#include<iostream>
using namespace std;

template <class T>
class ar{
	T* ptr;
	int size;
public: ar(T a[], int s);
	  void show();
};
template <class T>
ar<T>::ar(T a[], int s) {
	ptr = new T[s];
	size = s;
	for (int i = 0; i < s; i++)
			ptr[i] = a[i];
}

template <class T>
void ar<T> ::show() {
	for (int i = 0; i < size; i++) cout << " " << *(ptr + i) *2;
	cout << endl;
}

int main() {
	int a[5] = { 2,4,6,8,10 };
	ar <int>b(a, 5); //객체 선언과 동시에 오버라이딩
	b.show();
	return 0;
}