#include<iostream>
using namespace std;

void dosomething(int n)
{
    if (n)
    {
        dosomething(n / 10);
        cout<<n % 10;
    }
    
}
int main(){
    dosomething(123456);
    return 0;
}