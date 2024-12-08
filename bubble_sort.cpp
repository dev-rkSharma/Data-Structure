#include<iostream>
using namespace std;

// bubble sort
/*
bubble_sort(arr, size)
repeat for i < size
*/
int bubble_sort(int arr[], int size){
    int temp;
    for(int i = 0; i < size -1; i++){
        for(int j = 0; j < size; j++ ){
            if(arr[j] > arr[i]){ // change condition to arr[j] < arr[i] for sorting in descending order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}

int main(){
    int arr[] = {4,5,7,2,3,7,9,0,6,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
