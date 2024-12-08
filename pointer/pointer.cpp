/*
    *pointer variable is a special variable that is used to store the address of other variables
 */

#include<iostream>
using namespace std;

int main(){
    int a = 10; //normal variable
    int* b = &a; //pointer variable

    cout<<"value of a : "<<a<<endl;
    cout<<"address of a : "<<&a<<endl; //address of variable a 
    cout<<"value of b : "<<b<<endl; //  pointer b having  address of variable a 
    cout<<"value of *b : "<<*b<<endl; // accessing value of pointer b that is pointing to variable a;

    *b = 20; //change the value of a using the pointer
    cout<<"value of a after change : "<<a<<endl; // the value of a is changed to 20

    return 0;
}