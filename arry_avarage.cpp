#include<iostream>
using namespace std;

int arr_sum(int arr[], int len) {
	if (len == 1)
		return arr[0];

	int sub_result = arr_sum(arr, len - 1);
	return sub_result + arr[len - 1];
}

double divide(double n , double len){
    return n / len;
}

int main() {
	int arr[] = { 1, 8, 2, 10, 3 };

	cout << divide(arr_sum(arr,5), 5) <<"\n";

	return 0;
}

