#include<iostream>
using namespace std;



void three2_plus_sequance(int n)
{
    int static counter = 0;
    ++counter;
    if (n == 1)
    {
        cout<<counter<<" ";
        return;
    }
    
    if (n % 2 == 0){
        three2_plus_sequance(n / 2);
    }
    else{
        three2_plus_sequance(3 * n + 1);
    }

}


int main() {
	three2_plus_sequance(9);
	return 0;
}