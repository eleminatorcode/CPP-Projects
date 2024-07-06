#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
     //constructor
     Node(int data){
        this -> data = data;
        this -> next = NULL;
     }
     ~Node(){
        int value=this->data ;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
     }

};


//Insert at HEAD


void InsertAtHead (Node* &head, int d){
    
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void Print(Node* &head)
{
    Node* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//INSERT AT TAIL
void InsertAtTail(Node* &tail, int f){
    Node* temp=new Node(f);
    tail -> next= temp;
    tail=tail -> next;
}

//Insert at position
void InsertAtPosition(Node* tail,Node* head,int position, int d){
    
    //insert at start
    if(position==1){
        InsertAtHead(head,d);
        return;
    }




    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
         temp=temp->next;
        cnt++;
    }

// For tail condition
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }


    Node* nodeToinsert=new Node(d);
    nodeToinsert -> next=temp->next;
    temp->next=nodeToinsert;
}

//Deleting Node
void deleteAtposition(Node* &head,int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        delete temp;

    }
    else{
        Node* curr=head;
        Node* prev=NULL;
       int cnt=1;
       while(cnt <= position){
        prev=curr;
        curr= curr -> next;
        cnt++;
       }
       prev -> next=curr->next;
       curr->next=NULL;
       delete curr;
    }
}






int main(){
    //created new node
    Node* node1=new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    //head pointed to  node1
    Node* head=node1;
    Node* tail=node1;
    Print (head);

    //Insert at head;
    InsertAtHead(head,50);
    Print (head);

    InsertAtHead(head,12);
    Print (head);
    
    
    InsertAtHead(head,20);
    Print(head);
    //Insert at tail;
    InsertAtTail(tail,10);
    Print(head);
    InsertAtTail(tail,50);
    Print(head);
    InsertAtTail(tail,12);
    Print(head);
    InsertAtTail(tail,20);
    Print(head);
    //Insert at any position
    InsertAtPosition(tail,head,5,22);
    Print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

//delete
deleteAtposition(head,2);
Print(head);


    return 0;

}