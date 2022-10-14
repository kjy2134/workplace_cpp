#include<iostream>
using namespace std;

void countingsort(int arr[], int n, int k); // n:�迭�� ���� ����, k: �迭 ������ ����
int get_max(int arr[],int n);
int main() {
	int size;
	cout << "�迭 ũ��:";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	///////// �迭 ���� �Ϸ� ///////////
	int max = get_max(arr, size);
	 countingsort(arr, size,max);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	
	delete[] arr;
}
void countingsort(int arr[], int n, int k) { 
	int *count = new int[k+1]; //input�� max���� ���� count�ϴ� �迭�� ���� ��.

	for (int i=0; i < k+1; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < n; i++) { // count�� idx�� �ش��ϴ� ������ �ݺ� Ƚ���� ����
		count[arr[i]] ++;
	}
	for (int i = 0, j = 0; i < k+1; i++) {//count�迭�� idx���� count[idx]��ŭ�� input�迭�� �����. 
		while (count[i] > 0) { //count[0]==1, count[1]==2, arr=={0,1,1}
			arr[j] = i;
			j++;
			count[i]--;
		}
	}

	delete[] count;

}

int get_max(int arr[],int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
