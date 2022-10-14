#include<iostream>
using namespace std;

int select(int list[], int l, int r, int k);
int partition(int list[], int l, int r, int pivot);

int main() {
	int size;
	cout << "배열크기입력:";
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

	cout << "배열의 median :" << select(arr, 0, size - 1, size / 2)<<endl;
	int k;
	cout << "배열의 k번째 작은 값 입력(0번째-min):";
	cin >> k;
	cout << k << "번쨰로 작은 값:" << select(arr, 0, size - 1, k) << endl;
	delete[] arr;
}

//l, r= 첫 idx, 마지막idx
int select(int list[], int l, int r, int k) {//k번째 작은 수 찾기 0번째부터 시작
	if (k >= 0 && k < r - l + 1) {
		int n = r - l + 1; //배열의 원소 개수
		int randrange = l + rand() % n; //sublist고려 첫 idx 부터 랜덤 뽑기
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

int partition(int list[], int l, int r, int pivot) {//pivot은 pivot의 값
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
	}//pivot전까진 정렬 완료

	swap(list[i], list[r]); //pivot자리 까지 오름차순 정렬 완료
	return i; //pivot의 전체 list에서의 idx반환

}