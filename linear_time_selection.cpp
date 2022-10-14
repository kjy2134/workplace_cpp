#include<iostream>
using namespace std;

int select(int list[], int l, int r, int k);
int partition(int list[], int l, int r, int pivot);

int main() {
	int size;
	cout << "�迭ũ���Է�:";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "[";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout <<"]"<< endl;

	cout << "�迭�� median :" << select(arr, 0, size - 1, size / 2)<<endl;
	int k;
	cout << "�迭�� k��° ���� �� �Է�(0��°-min):";
	cin >> k;
	cout << k << "������ ���� ��:" << select(arr, 0, size - 1, k) << endl;
	delete[] arr;
}

//l, r= ù idx, ������idx
int select(int list[], int l, int r, int k) {//k��° ���� �� ã�� 0��°���� ����
	if (k >= 0 && k < r - l + 1) {
		int n = r - l + 1; //�迭�� ���� ����
		int randrange = l + rand() % n; //sublist��� ù idx ���� ���� �̱�
		int pivot = list[randrange];
		int piv_idx = partition(list, l, r, pivot);

		if (piv_idx - l == k)
			return list[piv_idx];
		else if (piv_idx - 1 > k)
			return select(list, l, piv_idx - 1, k);
		else
			return select(list, piv_idx + 1,  r, k - (piv_idx - l + 1));
	}
}

int partition(int list[], int l, int r, int pivot) {//pivot�� pivot�� ��
	int i;
	for (i = l; i < r; i++) {
		if (list[i] == pivot) {
			swap(list[i], list[r]);
			break;
		}
	}

	 i = l;
	for (int j = l; j <= r - 1; j++) {
		if (list[j] <= pivot) {
			swap(list[i], list[j]);
			i++;
		}
	}//pivot������ ���� �Ϸ�

	swap(list[i], list[r]); //pivot�ڸ� ���� �������� ���� �Ϸ�
	return i; //pivot�� ��ü list������ idx��ȯ

}