#include <iostream>
#include <cmath>
using namespace std;

bool isPowerTwo(int n){

    int ans = 1;
    for(int i=0;i<=30;i++){
        if(ans == n){
            return true;
        }
        if(ans < INT_MAX/2) {
            ans = ans * 2;
        }

    }

    return false;
}

int main(){

    int num;
    cout << "Enter the number = ";
    cin >> num;

    cout << isPowerTwo(num) << endl;
    return 0;
}