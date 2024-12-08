#include<iostream>
using namespace std;
int arr[10];
static int n = 5;

void insertions(int k,int item) {
    int j = n;
    while(j>=k){
        arr[j+1]=arr[j];
    j--;
    }
    arr[k] = item;
    n++;
}

void deleteElement(int k) {
    cout<<"deleted element "<<arr[k]<<endl;
    if(k>=0 && k<n) {
        for(int i=k; i<n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
    } else {
        cout<<"Invalid index."<<endl;
    }
        
}

void traverse(){
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    int choice;
    char ch;
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++) {
        
        cin>>arr[i];
    }

    cout<<endl;
    do{
        
    cout<<"Enter your choice (1. Insertion 2. Traverse 3.Delete): ";

    cin>>choice;

    switch(choice) {
        case 1:
            int k, item;
            cout<<"Enter the position and item to insert: ";
            cin>>k>>item;
            insertions(k,item);
            break;
        case 2:
            traverse();
            break;

        case 3:
        deleteElement(k);
            break;
        default:
            cout<<"Invalid choice."<<endl;
    }
    cout<<"Do you want to continue (y/n): ";
    cin>>ch;
    }while(ch == 'y' || ch == 'Y');


    return 0;
}

