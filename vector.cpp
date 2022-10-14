#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


void mapping(int arr[], int n, int out_num);

int main() {
	int size;
	cin >> size;

	int N;
	cin >> N;

	int* input = new int[size];
	for (int idx = 0; idx < size; idx++) {
		cin >> input[idx];
	}


	mapping(input, size, N);

	delete[] input;
	return 0;
}

void mappint(int arr[], int n, int out_num) {
	vector<int> *bucket= new vector<int> [n];
	for (int i = 0; i < n; i++) {
		bucket[arr[i]].push_back(0);
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		if(bucket[arr[i]].size()
	}



	delete[] bucket;

}