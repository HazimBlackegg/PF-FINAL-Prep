#include <iostream>
using namespace std;

int getComplement(int n){
    int m=n;
    int mask =0;

    if(n == 0) {
        return 1;
    }

    while(m!=0){
        mask= (mask << 1) | 1;
        m = m >> 1;
    }

    int ans  = (~n) & mask;
    return ans;

}
int main(){

    int number;
    cout << "Enter the number = ";
    cin >> number;

    cout << "Complement of " << number << " = "<< getComplement(number)<< endl;

    return 0;

}