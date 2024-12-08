#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* b = &a;
    int** c = &b;
    cout<<"value of a : "<<a<<endl;
    cout<<"address of a : "<<&a<<endl; //address of a
    cout<<"dereferencing a : "<<*(&a)<<endl;
    cout<<"value of b : "<<b<<endl;
    cout<<"address of b : "<<&b<<endl; //address of b
    cout<<"dereferencing b : "<<**(&b)<<endl;
    //pointer to pointer variable
    cout<<"value of c : "<<c<<endl;
    cout<<"address of c : "<<&c<<endl; //address of c
    cout<<"dereferencing c : "<<***(&c)<<endl; //accessing value of c using pointer to pointer
    cout<<"value of **c : "<<**c<<endl; //accessing value of c using pointer to pointer

    **c = 20; //change the value of a using the pointer to pointer
    cout<<"value of a after change : "<<a<<endl; // the value of a is changed to 20

    //pointer to pointer variable
    cout<<"value of c : "<<c<<endl;
    cout<<"address of c : "<<&c<<endl; //address of c
    cout<<"dereferencing c : "<<***(&c)<<endl; //accessing value of c using pointer to pointer
    cout<<"value of **c : "<<**c<<endl; //accessing value of c using pointer
    

    return 0;
}