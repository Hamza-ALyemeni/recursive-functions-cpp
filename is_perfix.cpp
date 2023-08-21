#include<iostream>
using namespace std;

bool is_perfix(string strng, string perfix , int starting_pos = 0) {
    bool static p = true; 
    if(starting_pos == 0){
        return p;
    }

    if(strng[starting_pos] == perfix[starting_pos]){
        p = true;
    }
    else{
        p = false;
        return p;
    }

    return is_perfix(strng, perfix,starting_pos - 1);
}

int main() {
	string strng = "ABCDEFG";
	string perfix = "ABCT";

	cout<<is_perfix(strng, perfix, 2)<< "\n";

	// for (int i = 0; i < 5; ++i) {
	// 	cout<<arr[i]<<" ";
	// }

	return 0;
}

