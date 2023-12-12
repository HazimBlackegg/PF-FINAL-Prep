#include <iostream>
#include <vector>
using namespace std;

int peakInMountainArray(vector <int>& arr){
    int s = 0;
    int e = arr.size()-1;

    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }

        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;

}

int main(){

    vector <int> brr = {3,4,5,1};

    cout << peakInMountainArray(brr);

    return 0;
}