#include <iostream>
#include <vector>
using namespace std;

int findDuplicates(vector<int> &arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    vector <int> dub {2,4,3,5,6,3};

    cout << "The Duplicate Element =  " << findDuplicates(dub);

    return 0;
}