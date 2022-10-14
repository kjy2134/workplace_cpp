#include<iostream>
using namespace std;


void bubblesort(int list[], int n) {//n은 리스트 길이
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (list[j] > list[j + 1]) {
				list[j] = list[j] ^ list[j + 1];
				list[j + 1] = list[j] ^ list[j + 1];
				list[j] = list[j] ^ list[j + 1]; //tmp 없이 스왑
			}
		}
		
	}
}


	int main() {
		int size;
		int* input;
		cin >> size;
		input = new int[size];
		for (int idx = 0; idx < size; idx++) {
			cin >> input[idx];
		}
		bubblesort(input, size);
		
		for (int i = 0; i < size; i++)
			cout << input[i] << ' ';
		delete[] input;
		return 0;
}