#include<iostream>
using namespace std;
void pow_with_recursion(int n, int p = 2)
{
    int static result = 1;

    if (p == 0)
    {
        cout<<result<<"\n";
        return;
    }
        
    result *= n;
   
    p--;

    pow_with_recursion(n , p);
}

int main()
{
    pow_with_recursion(7, 3);
}