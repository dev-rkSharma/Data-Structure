#include <iostream>
using namespace std;

void change(int &b) {
    b = 20;
}

int main() {
    int a = 10;
    cout<<"value of a before change : "<<a<<endl;
    change(a);
    cout<<"value of a after change : "<<a<<endl;
    return 0;
}