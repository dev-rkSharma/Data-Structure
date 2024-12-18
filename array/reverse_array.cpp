#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0 ; i< n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int n){
    int start = 0 , end = n-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start+=1;
        end-=1;

    }
}
int main(){
    int n;
    cout<<"Enter the size of array : "; cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<" : ";  // user input 5 6 3 4 2 8 9 10 10 9 8 2 4 3 6 5
        cin>>arr[i];
    }
    cout<<"Original array : \n";  // 5 6 3 4 2 8 9 10
    print(arr,n);
    reverse(arr,n);
    cout<<"\nReversed array : \n";  // 10 9 8 2 4 3 6 5
    print(arr,n);
    return 0;
}