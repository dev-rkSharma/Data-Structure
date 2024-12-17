#include <iostream>
using namespace std;


int main() {
    int n ;
    cout<<"Enter the size of array: ";  // size of array is one more than the last index. So we subtract 1.
    cin>>n;
    if(n<=0){
        cout<<"Invalid Input!";
        return 0;
    }


    int a[n];
    for(int i=0; i<=n-1; i++){
        cout<<"Enter element "<<i+1<<": ";  // indexing starts from 0 in C++ so we add 1 to get user input index. 0th element is at index 0. 1st element is at index 1 and so on.
        cin>>a[i];
    }
    int size = (sizeof(a)/sizeof(a[0])) - 1;
    for(int i = size; i >= 0; i--){
        cout<<a[i]<<" ";
    }
    return 0;
}