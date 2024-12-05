#include<iostream>
using namespace std;

void square(int n){
    cout<<"square of range "<<n<<endl<<"----------------------------------------------------------------"<<endl;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void square_alphabet(){
    cout<<"square of alphabet "<<endl<<"----------------------------------------------------------------"<<endl;
    char ch = 'A';
    for(int i = 0; i < 26 ; i++){
        ch = 'A';
        for(int j = 0; j < 26 ; j++){
            cout<<ch;
            ch = ch + 1;
        }
        cout<<endl;
    }
};

void continous_number_in_pattern(){
    int a = 1;
    for(int i=0; i<3; i++){
        for(int j =0; j < 3; j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}
int main() {
    int n;
    // cout<<"enter the range : ";cin>>n;
    // square(n);  // function call to print square pattern with given range
    // square_alphabet();
    continous_number_in_pattern();
    return 0;
}