#include <iostream>
using namespace std;


int findUnique(int arr[],int size){
    int ans = 0 ;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){

    int uni[7] = {2,3,1,6,3,2,6};
    cout << "The Unique Element = " << findUnique(uni,7);

    return 0;
}
