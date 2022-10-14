#include <iostream>
#include<unordered_map>
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


	mapping(input,size, N);

	delete[] input;
	return 0;
}

void mapping(int arr[], int n, int out_num) {
	unordered_map <int, int>  m;
	
	for (int i = 0; i < n; i++) {
		if (m.find(arr[i]) == m.end()) {
			m[arr[i]] = 1;
		}
		else {
			m[arr[i]] ++;
		}
}

	for (int i = 0; i < out_num; i++) {
		int max_key = 0;
		int max_val = 0;
		for (auto& elem : m) {
			if (elem.second > max_val) {
				max_val = elem.second;
				max_key = elem.first;
			}
		}
		cout << max_key << " ";
		m.erase(max_key);
	}
}
	


}

