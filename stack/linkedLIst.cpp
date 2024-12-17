#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
} *start = NULL, *temp = NULL, *newNode ;

struct node* create() {
    newNode = new struct node();
    if(newNode == NULL) {
        cout<<"Memory allocation failed...";
        return NULL;
    }
    cout<<"Enter the data : ";
    cin>>newNode->data;
    newNode->next = NULL;
    return newNode;
}

void push() {
    newNode = create();
    
    if(start == NULL) {
        start = newNode;
    }else{
        newNode->next = start;
        start = newNode;
    }
}

void pop() {
    if(start == NULL){
        cout<<"Stack is empty...";
        return;
    }else{
        temp = start;
        start = start->next;
        cout<<"Popped successfully..."<<temp->data<<endl;
        delete temp;
    }
}

void display() {
    if(start == NULL){
        cout<<"There is nothing to display\n\t______stack is empty\n";
        return;
    }else{
        temp = start;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL";
        cout<<"\n";
    }
}

void exit(){
    cout<<"Exiting...";
    exit(0);
}

int main(){
    char choice;
    do{
        int ch;
        cout<<"\n\n";
        cout<<"\t1. Push\n\t2. Pop\n\t3. Display\n\t4. Exit\n\n";
        cout<<"Enter you choice : ";
        cin>>ch;
        switch(ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit();
            default:
            cout<<"Invalid choice!";
        }
        cout<<"Do you want to continue : ";
        cin>>choice;
        if(choice == 'n' || choice == 'N'){
            break;
        }
        
    }while(choice == 'y' || choice == 'Y');
    return 0;
}