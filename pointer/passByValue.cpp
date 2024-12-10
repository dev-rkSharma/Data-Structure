#include<iostream>
using namespace std;

void change(int b){
    b = 20; //changing the value of b in the function but not affecting the original variable a
    
    cout<<"value of b in change : "<<b<<endl;
}

int main(){
    int a ;
    a = 10;
    cout<<"value of a before change: "<<a<<endl;
    
    change(a); //passing the value of a to the function
    cout<<"value of a after change: "<<a;

    return 0;
}