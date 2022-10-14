#include<iostream>
using namespace  std;

void selectionsort(int list[], int n);

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	int ele;
	for (int i = 0; i < n; i++) {
		cin >> ele;
		arr[i] = ele;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] <<" " ;
	}
	cout << endl;
	selectionsort(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " " ;
	}
	delete[] arr;
}

void selectionsort(int list[], int n) { //n은 배열 길이
	
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j <= n - 1; n++) {
			if (list[min_index] > list[j]) {
				min_index = j;
			}
		}
		int tmp = list[min_index];
		list[min_index] = list[i];
		list[i] = tmp;
	}
	
}