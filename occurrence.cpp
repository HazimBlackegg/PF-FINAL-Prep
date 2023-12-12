#include <iostream>
using namespace std;

int firstOccurrence(const int *arr,int n,int key){

    int s = 0,e = n -1;
    int mid = s + (e-s)/2;

    int ans;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }

        else if(key > arr[mid]){
            // Go to Right part
            s = mid + 1;
        }

        else if(key < arr[mid]){
            // Go to Left part
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

int lastOccurrence(const int arr[],int n,int key){

    int s = 0,e = n -1;
    int mid = s + (e-s)/2;

    int ans;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }

        else if(key > arr[mid]){
            // Go to Right part
            s = mid + 1;
        }

        else if(key < arr[mid]){
            // Go to Left part
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;

}

int main(){

    int even[7] = {1,2,3,3,4,3,5};

    cout << "First occurrence of 3 is at index " << firstOccurrence(even,7,3) << endl;
    cout << "Last occurrence of 3 is at index " << lastOccurrence(even,7,3) << endl;

    return 0;
}
