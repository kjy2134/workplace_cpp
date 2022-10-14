#include<iostream>
using namespace std;

void mergesort(int list[], int l, int r);
void merge(int list[], int l, int m, int r);

int main() {
	int n; 
	cin >> n;
	int* list = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> list[i] ;
	}
	for (int i = 0; i < n; i++) {
		cout << list[i] << " ";
	}
	cout << endl;
	mergesort(list, 0, n-1);

	for (int i = 0; i < n; i++) {
		cout << list[i] << " ";
	}
	delete[] list;
}

void mergesort(int list[], int l, int r) {
	
	if (l < r) {
		int m = (l + r) / 2;
		mergesort(list, l, m);
		mergesort(list, m + 1, r);

		merge(list, l, m, r);
	}
}
void merge(int list[], int l, int m, int r) {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int* L = new int[n1];
	int* R = new int[n2];
	for (int i = 0; i < n1; i++) {
		L[i] = list[l+i];
	}
	for (int j = 0; j < n2; j++) {
		R[j] = list[m + 1 + j];
	}
	i = 0; // index of L list
	j = 0; // index of R list
	k = l;// index of sorted list //subarray의 첫 인덱스를 k로 둔다. 지역변수라 초기화됨.
	
	while (i < n1 && j < n2) {
		if (L[i] >= R[j]) {
			list[k] = R[j];
			j++;
		}
		else {
			list[k] = L[i];
			i++;
		}
		k++;
	}

	while (i < n1) {
		list[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		list[k] = R[j];
		j++;
		k++;
	}
	delete[] L;
	delete[] R;
}
