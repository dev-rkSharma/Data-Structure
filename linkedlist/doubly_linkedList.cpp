#include<iostream>
using namespace std;
struct Node {
    struct Node *next = NULL, *prev = NULL;
    int data;
} *head = NULL, *tail = NULL, *newNode, *temp1 = NULL , *temp2 = NULL;


void TWL_insertAt_first() {
    newNode = (struct Node *)(malloc(sizeof(struct Node)));
    newNode->prev = NULL;
    newNode->next = NULL;
    cout<<"Enter data for first node : ";
    cin>>newNode->data;

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    
}

void TWL_insertAt_last() {
    newNode = (struct Node *)(malloc(sizeof(struct Node)));
    newNode->prev = NULL;
    newNode->next = NULL;
    cout<<"Enter data for last node : ";
    cin>>newNode->data;

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void TWL_insertAt_position(int pos) {
    newNode = (struct Node *)(malloc(sizeof(struct Node)));
    cout<<"Enter data : ";
    cin>>newNode->data;

    temp1 = head;
    for(int i=0; i<pos; i++){
        temp1 = temp1->next;
    }
    newNode->prev = temp1;
    newNode->next = temp1->next;
    temp1->next->prev = newNode;
    temp1->next = newNode;
}
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

    temp1 = head;
    temp2 = tail;
    while(temp1!=NULL){
        cout<<temp1->data<<"->";
        temp1 = temp1->next;
    }
    cout<<"X";

    cout<<endl<<"Do you want to add more nodes (y/n) : "<<endl;
    cin>>ch;
    }
    while(ch == 'y' || ch == 'Y' );
    TWL_insertAt_first();
    TWL_insertAt_last();
    cout<<"enter loc for insert at location : ";
    int pos;
    cin>>pos;
    TWL_insertAt_position(pos);
    temp1 = head;
    
     while(temp1!=NULL){
        cout<<temp1->data<<"->";
        temp1 = temp1->next;
    }
    cout<<endl;
    temp1=tail;
    while(temp1!=NULL){
        cout<<temp1->data<<"->";
        temp1 = temp1->prev;
    }

    return 0;
}