#include<iostream>
using namespace std;
#define max 5
int top=-1;
int stack[max];

void push(int item){
    if(top == max){
        cout<<"Stack Overflow!"<<endl;
        return;
    }else{
        top++;
        stack[top] = item;
        cout<<"Item pushed to stack : "<<endl;
    }
}

void pop(){
    if(top == -1){
        cout<<"Stack Underflow!"<<endl;
        return;
    } else{
        cout<<"Item popped from stack : "<<stack[top]<<endl;
        top--;
    }
}

void display(){
    if(top == -1){
        cout<<"Stack is empty!"<<endl;
        return;
    } else{
        cout<<"Stack : "<<endl;
        for(int i=top; i>=0; i--){
            cout<<endl<<"|"<<stack[i]<<"|";
        }
        cout<<endl<<"---";
        cout<<endl;
    }
}

int main(){
    char ch;
    do{
        cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice : ";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter an integer : ";
                int item;
                cin>>item;
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Exiting...";
                exit(0);
            default:
                cout<<"Invalid choice!"<<endl;
        }
        
        cout<<"do you want to continue : ";cin>>ch;
        
    }while(ch == 'y' || ch == 'Y');

    return 0;
}