#include<iostream>
using namespace std;

void sum_last(int arr[], int len , int position) {
	int static result = 0;
    if (len == 0){
        cout<<result<<'\n';
		return;
    }
	result += arr[position];  
    sum_last(arr,len - 1, position - 1);
}

int main() {
	int arr[] = { 1, 3, 5, 7, 4, 11};

	sum_last(arr, 3 , 5);

	// for (int i = 0; i < 5; ++i) {
	// 	cout<<arr[i]<<" ";
	// }

	return 0;
}

