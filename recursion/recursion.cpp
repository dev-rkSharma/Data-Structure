#include<iostream>
using namespace std;

void number(int n){

    if(n<=0){
        return ;
    }
    number(n-1); // recursive call
    cout<<n<<endl;
    
}

int main() {
    int n;
    cout<<"enter the number : ";cin>>n;
    number(n);
    return 0;
}