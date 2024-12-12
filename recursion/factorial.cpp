#include<iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n){
    if(n == 0 ){
        return 1;
    }

    return n * factorial(n - 1); // returns factorial number
}
int main() {
    int n;
    cout<<"Enter a number : "; cin>>n;

    cout<<factorial(n)<<endl;
    return 0;
}