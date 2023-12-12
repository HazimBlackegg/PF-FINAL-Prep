#include <iostream>
#include <vector>
using namespace std;

vector <int> findArrayIntersection(vector <int> &arr1,int n,vector <int> &brr1,int m){
    int i = 0,j = 0;
    vector <int> ans;
    while(i<n && j<m) {
        if (arr1[i] == brr1[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < brr1[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}


int main(){

    vector <int> arr = {1,2,3,4,6,7,8};
    vector <int> brr ={ 3,4,5,7,9};

    vector<int> result = findArrayIntersection(arr, arr.size(), brr, brr.size());

    cout << "Intersection: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
