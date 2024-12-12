#include<iostream>
using namespace std;

// Function to calculate Fibonacci number using recursion
int fab(int n){
    if(n == 0 || n == 1)
        return 1;
    return fab(n-1) + fab(n-2) ;
}

int main() {
    int n;
    cout<<"Enter a number : "; cin>>n;
    cout<<fab(n);
    return 0;

}