#include<iostream>
using namespace std;

void palindrome(int arr[], int len , int first = 0) {
    bool is_palindrome = true;

    if (len == 0){
        cout<<"yes they are plindrome"<<'\n';
		return;
    }
    if (arr[first] == arr[len])
    {
        is_palindrome = true;
    }else{
        is_palindrome = false;
        cout<<"nah"<<"\n";
        return;
    }
    palindrome(arr,len - 1, first + 1);
}

int main() {
	int arr[] = { 1, 4, 5, 5, 4, 1};

	palindrome(arr, 5);

	// for (int i = 0; i < 5; ++i) {
	// 	cout<<arr[i]<<" ";
	// }

	return 0;
}

