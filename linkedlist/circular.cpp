#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
} *start=NULL, *temp=NULL, *newNode;

struct node* create() {
    newNode = new node();
    if(newNode == NULL){
        cout<<"Memory allocation failed...";
        exit(0);
    }
    cout<<"Enter the data : ";
    cin>>newNode->data;
    newNode->next = NULL;
    return newNode;
}

void insert(){
    newNode = create();
    if(start == NULL){
        start = newNode;
        newNode->next = start;
        cout<<"first node created"<<endl;
    }
    else {
        temp = start;
        while(temp->next != start){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = start;
        cout<<"Node inserted successfully"<<endl;
    }

}

void display(){
    if(start == NULL){
        cout<<"list is empty..."<<endl;
        return;
    }else{
        temp = start;
        cout<<"\n--------------------Circular linked list ---------------------------\n"<<endl;
        do{
            cout<<temp->data<<"->";
            temp = temp->next;
            
        }while(temp != start);
        cout<<"-----------back to start of list "<<endl;
    }
}

void _delete(){
    if(start == NULL){
        cout<<"List is empty..."<<endl;
        return;
    }else if(start->next == start){
        temp = start;
        delete temp;
        start = NULL;
        cout<<"Node deleted successfully"<<endl;
    } else{
        temp = start;
        while(temp->next!=start){
            temp = temp->next;
        }
        temp->next = start->next;
        delete start;
        start = temp->next;
        cout<<"Node deleted successfully"<<endl;
    }
}

int main() {
    char choice;
    do{
        int ch;
        cout<<"\n1. insert \n2. delete \n3. display \n4. exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
                _delete();
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
        cout<<"\nDo you want to continue (y/n) : ";
        cin>>choice;
    }while(choice == 'y' || choice == 'Y');
    return 0;
}