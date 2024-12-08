#include<iostream>
using namespace std;

// binary search
int bsearch(int arr[],int size,int item)
{
    int beg = 0, end = size-1;
    int mid = (end + beg)/2;
    int index;
    while(beg <= end && arr[mid] != item){
        if(item < arr[mid]){
            end = mid -1;
        }else{
            beg = mid + 1;
        }
        mid = (beg + end)/2;
    }
    if(arr[mid] == item){
        index = mid;
    }else{
        index = -1;
    }
    return index;
}

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int item;
    cout<<"Enter the item to search : ";  // user input 50 60 80 30 10 40 90
    cin>>item;
    int index = bsearch(arr, size, item);
    if (index == -1) {
        cout<<"Item not found";
    }
    else{
        cout<<"Item found at "<<index<<endl;
    }
    return 0;
}
