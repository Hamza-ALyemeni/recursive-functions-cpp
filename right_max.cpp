#include<iostream>
using namespace std;

void left_max(int arr[], int len , int start_position = 0) {
	if (len == 1)
		return;

	left_max(arr, len - 1);
	arr[len-1] = max(arr[len-1], arr[len-2]);
}

int main() {
	int arr[] = { 1, 3, 5, 7, 4, 2};

	left_max(arr, 6 , 0);

	for (int i = 0; i < 5; ++i) {
		cout<<arr[i]<<" ";
	}

	return 0;
}

