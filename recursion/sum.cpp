#include<iostream>
using namespace std;

// Function to calculate sum of first n natural numbers
int sum(int n){
    if(n == 0){
        return 0;
    }
    return n+sum(n-1); // sum of first n natural numbers using recursive call
}

int main() {
    int n;
    cout<<"Enter the number : "; cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}