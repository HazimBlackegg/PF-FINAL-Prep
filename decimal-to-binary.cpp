#include <iostream>
using namespace std;

int * convertToBinary(int num, int bits){

    int *temp = new int [bits];

    for(int i=0; i<bits; i++){
        temp[i]=num%2;
        num=num/2;
    }

    return temp;

    delete[]temp;
//    cout << " The converted binary number is as follows :"<< endl;
//
//    for (int i=0;  i<bits; i++){
//        cout << temp[i];
//    }
//    delete[]temp;
}

int main(){

    int num;
    cout << " Enter the number : ";
    cin>> num;

    int bits = 8;
    cout << bits << endl;

    int *arr ;
    arr = convertToBinary(num, bits);

      for (int i=bits; i>=0; i--){

          cout << arr[i];
      }


}
