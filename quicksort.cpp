#include<iostream>
using namespace std;

int partition(int list[], int l, int r, int pivot);
void quicksort(int list[], int l, int r);

int main() {
	int size;
	cout << "배열 크기 입력:";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i]<< ' ';
	}
	cout << endl;
/////////////배열 생성 완료 /////////////
	quicksort(arr, 0, size - 1);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	delete[] arr;
}

int partition(int list[], int l, int r, int pivot) {
	for (int i = l; l < r ; i++) {
		if (list[i] == pivot) {
			swap(list[i], list[r]);
			break;
		}
	}
	int i = l;
	for (int j = l; j <= r - 1; j++) { //맨뒤에있는 pivot전까지만 돌면서 작은값은 앞으로 정렬
		if (list[j] <= pivot) {
			swap(list[i], list[j]);
			i++;
		}
	}
	swap(list[i], list[r]);
	return i;

}
void quicksort(int list[], int l, int r) {
	if (l < r) {
		int n = r - l + 1;
		int pivot = list[l + rand()%n];
		int pos = partition(list, l, r, pivot);

		quicksort(list, l, pos - 1);
		quicksort(list, pos + 1, r);
	}
}