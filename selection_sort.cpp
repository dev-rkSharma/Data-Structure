#include<iostream>
using namespace std;

//! algo
/*
set small := arr[0];
repeat while i < n (size of arry);
if small > arr[i] then

    (swapp)
    {
    temp := small;
    small := arr[i];
    arr[i] := temp;
    }
    i := i + 1;
end loop

*/

int selection_sort(int arr[] , int size){ 
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = i; j < size; ++j){
            //  change condition to (arr[i] < arr[j]) to print in decreasing order
            if(arr[i] > arr[j]) {
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
    selection_sort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}