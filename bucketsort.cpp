#include<iostream>
#include<vector>
#include<algorithm>

#define bucket_number 3

using namespace std;

int get_max(int arr[], int n);
void bucketsort(int arr[], int n, int k);
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
	
	vector<int>bucket[bucket_number];//int형 벡터배열
	
	for (int i = 0; i < n; i++) {//bucket에 넣기
		int emt = arr[i] / (k / bucket_number);
		bucket[emt].push_back(arr[i]);
	}

	//bucket정렬
	for (int i = 0; i < bucket_number; i++) {
		sort(bucket[i].begin(), bucket[i].end());
	}
	int idx = 0;
	for (int i = 0; i < bucket_number; i++) {
		for (int j = 0; j < bucket[i].size(); j++) {//bucket[i].size()대신 k / bucket_number로 해도 됨.
			arr[idx] = bucket[i][j];
			idx++;
		}
	}
	delete[] bucket;
}
