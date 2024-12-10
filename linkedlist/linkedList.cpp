#include<iostream>
using namespace std;


struct Node{
    int data;
    struct Node *next;

} *start = NULL;
struct Node *newNode, *temp = NULL;


//* creation of list

void create() {

    char ch;
    int data;

    do{
    newNode = (struct Node*)(malloc(sizeof(struct Node)));
    if(newNode == NULL){
        cout<<"memory overflow"<<endl;
        return;
    }else{

    cout<<"enter data : ";
    cin>>data;
    cout<<endl;
    newNode->data = data;
    newNode->next = NULL;
    if(start == NULL){
        start = newNode;
        cout<<"first node created successfully"<<endl;
    }else{
        temp = start;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;

    }
    
    cout<<endl<<"Do you want to add more nodes (y/n) : ";
    cin>>ch;
    }
    }while(ch == 'y' || ch == 'Y');

}

//* operations


void insertAtBegning(){
    int data;
    cout<<endl<<"insertion at beginning"<<endl<<"----------------------------------"<<endl;
    newNode = (struct Node *)(malloc(sizeof(struct Node)));
    if(newNode == NULL){
        cout<<"memory overflow";
        return;
    }else{

    cout<<"inter your data : ";cin>>data;
    newNode->data = data;
    newNode->next = start;
    start = newNode;
    }
    
}
void insertAtEnd(){
    int data;
    cout<<"inserting at end"<<endl<<"----------------------------------------"<<endl;
    newNode = (struct Node *)(malloc(sizeof(struct Node)));
    if(newNode == NULL)
    {
        cout<<"memory overflow ";
        return ;
    }else{

    cout<<"enter you data : ";cin>>data;
    newNode->data = data;
    newNode->next = NULL;
    temp = start;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    }
}

void insertAtLocation(int loc) {
    int data;
    newNode = (struct Node *)(malloc(sizeof(struct Node)));
    if(newNode == NULL){
        cout<<"memory overflow ";
        return ;
    }else{

    cout<<"enter your data : ";cin>>data;
    newNode->data = data;
    newNode->next = NULL;
    temp = start;
    for(int i = 1; i < loc; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    }

}
void deleteAtFirst(){
    cout<<"deleting first node"<<endl<<"----------------------------------"<<endl;
    if(start == NULL){
        cout<<"list is empty"<<endl;
        return;
    } else{
        temp = start;
        start = start->next;
        free(temp);
        cout<<"first node deleted successfully"<<endl;
    }
}

void deleteAtEnd() {
    cout<<"deleting node at given location"<<endl<<"----------------------------------"<<endl;
    if(start == NULL){
        cout<<"list is empty : underflow"<<endl;
        return;
    }else if(start->next == NULL){
        
            temp = start;
            start = NULL;
            free(temp);
            cout<<"last remaining node deleted successfully"<<endl;
    }else{
        temp = start;
        
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
        cout<<"last node deleted successfully"<<endl;
    }
}
void deleteAtLocation(int loc) {
    if(start == NULL){
        cout<<"list is empty"<<endl;
    }else {
        temp = start;
        struct Node* save = start;
        for(int i=1; i<loc; i++){
            save = temp;
            temp = temp->next;
        }
        save->next = temp->next;
        cout<<"node at location "<<loc<<" deleted successfully"<<endl;
    }
}

void traverse(){

    temp = start;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"X";
}

int main() {
    char ch;  
    create();  
    do{
    cout<<"press 1 -> insert at begning"<<endl;
    cout<<"press 2 -> insert at end"<<endl;
    cout<<"press 3 -> insert at given location"<<endl;
    cout<<"press 4 -> delete first node"<<endl;
    cout<<"press 5 -> delete last node"<<endl;
    cout<<"press 6 -> delete from given location"<<endl;
    cout<<"press 7 -> traversing"<<endl;
    int choice;

    cout<<"enter your choice : ";cin>>choice;
    switch(choice)
    {
        case 1:
            insertAtBegning();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            int loc;
            cout<<"enter location : ";
            cin>>loc;
            insertAtLocation(loc);
            break; 
        case 4:
            deleteAtFirst();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            int location;
            cout<<"enter the location to delete"<< endl;
            cin>>location;
            deleteAtLocation(location);
            break;
        case 7:
            traverse();
            break;
        default:
            cout<<"entered wrong choice"<<endl;
    }
        cout<<endl<<endl<<"Do you want to continue??  (y/n) : ";
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');
    
    return 0;
}
