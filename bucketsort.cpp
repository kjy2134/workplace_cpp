#include<iostream>
#include<vector>
#include<algorithm>

#define bucket_number 3

using namespace std;

int get_max(int arr[], int n);
void bucketsort(int arr[], int n, int k);
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

	bucketsort(arr, size, max);
	
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	delete[] arr;
}


int get_max(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
static void bucketsort(int arr[], int n, int k) {
	
	vector<int>bucket[bucket_number];//int�� ���͹迭
	
	for (int i = 0; i < n; i++) {//bucket�� �ֱ�
		int emt = arr[i] / (k / bucket_number);
		bucket[emt].push_back(arr[i]);
	}

	//bucket����
	for (int i = 0; i < bucket_number; i++) {
		sort(bucket[i].begin(), bucket[i].end());
	}
	int idx = 0;
	for (int i = 0; i < bucket_number; i++) {
		for (int j = 0; j < bucket[i].size(); j++) {//bucket[i].size()��� k / bucket_number�� �ص� ��.
			arr[idx] = bucket[i][j];
			idx++;
		}
	}
	delete[] bucket;
}
