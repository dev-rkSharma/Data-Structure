/*
    * pointer to pointer variable is used to store the address of other pointer variable
*/

#include<iostream>
using namespace std;

int main(){
    int a = 10; //normal variable
    int* b = &a; //pointer variable
    int** c = &b; //pointer to pointer variable
    cout<<"value of a : "<<a<<endl;
    cout<<"address of a : "<<&a<<endl; //address of variable a 
    cout<<"value of b : "<<b<<endl; // pointer b having  address of variable a 
    cout<<"address of b : "<<&b<<endl; //address of variable a 
    cout<<"value of *b : "<<*b<<endl; // accessing value of pointer b that is pointing to variable a;
    cout<<"value of c : "<<c<<endl; // pointer c having  address of pointer b
    cout<<"value of **c : "<<**c<<endl; // accessing value of pointer c that is pointing to pointer b and then to variable a;

    **c = 20; //change the value of a using the pointer to pointer
    cout<<"value of a after change : "<<a<<endl; // the value of a is changed to 20
    return 0;
}