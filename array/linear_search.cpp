#include<iostream>
using namespace std;

// linear search 
int lsearch(int arr[],int n ,int item){

    for(int i=0; i<n; i++) {
        if(arr[i] == item){
            return i;
        }
    }
        return -1;
}


int main() {
    int la[] = {50,60,80,30,10,40,90};

    int item;
    cout<<"Enter the item to search : ";  // user input 50 60 80 30 10 40 90
    cin>>item;
    int n = sizeof(la)/sizeof(la[0]);
    int index = lsearch(la,n,item);
    if (index == -1) {
        cout<<"item no found";
    }
    else{
        cout<<"item found at "<<index<<endl;
    }
    return 0;
}

// linear search 
