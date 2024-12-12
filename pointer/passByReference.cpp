#include<iostream>
using namespace std;

void change(int* ptr){ // taking pointer variable to store the address of variable 
    *ptr = 30; // updating the address of variable will reflex the change in main 
}

int main(){
    int a = 20;
    cout<<"value of a before change : "<<a<<endl;

    change(&a);

    cout<<"value of a after change : "<<a<<endl; // 

    return 0;
}