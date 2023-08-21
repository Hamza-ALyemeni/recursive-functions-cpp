#include<iostream>
using namespace std;

void sum_first(int arr[], int len , int position) {
	int static result = 0;
    if (len == 0){
        cout<<result<<'\n';
		return;
    }
	result += arr[position];  
    sum_first(arr,len - 1, position + 1);
}

int main() {
	int arr[] = { 1, 3, 5, 7, 4, 11};

	sum_first(arr, 3 , 0);

	// for (int i = 0; i < 5; ++i) {
	// 	cout<<arr[i]<<" ";
	// }

	return 0;
}

