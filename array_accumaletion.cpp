#include<iostream>
using namespace std;

void array_accumaltion(int arr[], int len) {
	if (len == 1)
		return;

	array_accumaltion(arr, len - 1);
    arr[len - 1] += arr[len - 2];
}

int main() {
	int arr[] = { 1, 8, 2, 10, 3 };

	array_accumaltion(arr, 5);

	for (int i = 0; i < 5; ++i) {
		cout<<arr[i]<<" ";
	}

	return 0;
}

