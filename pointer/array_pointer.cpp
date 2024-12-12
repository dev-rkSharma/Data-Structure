#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout<<arr<<endl; // address of the array
    cout<<&arr<<endl; // address of the array
    cout<<*arr<<endl; // value at the first index of array
    cout<<arr[0]<<endl; // value at the firstindex of array
    cout<<*(arr+1)<<endl; // value at the second index of array
    cout<<arr[1]<<endl; // value at the third index of array
    cout<<&arr[2]<<endl; // address of the third index of array
    
    return 0;
}