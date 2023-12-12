#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cout << "Enter number = ";
    cin >> n;

    int ans = 0;
    int i=0;
    while(n!= 0){
        int digit = n & 1;
        ans = (digit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }

    cout << "Binary code = " << ans << endl;
    return 0;
}
