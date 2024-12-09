#include<iostream>
using namespace std;
struct Node {
    struct Node *next = NULL, *prev = NULL;
    int data;
} *head = NULL, *tail = NULL, *newNode;


int main(){
    int data;
    char ch;
    do{
    newNode = (struct Node *)(malloc(sizeof(struct Node)));
    cout<<"Enter data : ";
    cin>>data;
    newNode->data = data;

    if(newNode == NULL){
        cout<<"Memory overflow";
        return 0;
    }else if(head == NULL){
        head = newNode;
        tail = newNode;
        newNode->next = NULL;
        newNode->prev = NULL;
        cout<<"First node created successfully"<<endl;
    }else if(head == tail){
        newNode->prev = head;
        head->next = newNode;
        tail = newNode;
    }else{
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    cout<<endl<<"Do you want to add more nodes (y/n) : ";
    cin>>ch;
    }
    while(ch == 'y' || ch == 'Y' );
    
   
    return 0;
}