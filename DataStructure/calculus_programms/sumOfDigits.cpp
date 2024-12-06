#include<iostream>
using namespace std;

int sumDigit(int num){
        int sum = 0;
    if(num<0){
        cout<<"error: -> given number should be greater than zero"<<endl;
        return -1;
    }else{
        while(num>0){
            int lastDigit = num % 10;
            sum += lastDigit;
            num = num/10;
        }
    }
    return sum;
}

int main(){
    int a;
    cout<<"enter the number : ";
    cin>>a;
    int sum = sumDigit(a);
    cout<<"sum of "<<a<<" is = "<<sum;
    return 0;
}