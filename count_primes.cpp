#include<iostream>
using namespace std;

int count_prime(int start, int end) {
    bool prime = true;
    int counter = 0 ;
    for(int i = start ; i < end ; i++)
    {
        for(int j = 2 ; j < i ; j++)
        {
            if(i % j == 0){
                prime = false;
                break;
            }else{
                prime = true;
            }
        }
        if(prime)
            counter++;
    }
	return counter;
}

int counter_prime_with_recursion(int start , int end)
{
    int counter = 2;
    int prime = 0;

    if(start == end)
        return counter;

    int is_prime = counter_prime_with_recursion(counter + 1,start);
    
    if(start % counter == 0)
        return false;

    counter++;

    counter_prime_with_recursion(start + 1,end);
    
}

int main() {
	// int arr[] = { 1, 8, 2, 10, 3 };

	cout<<counter_prime_with_recursion(10, 200);

	// for (int i = 0; i < 5; ++i) {
	// 	cout<<arr[i]<<" ";
	// }

	return 0;
}

