//Given the head of ll,reverse it

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }

};

class doublylinkedlist{
    public:
    Node* head;
    Node* tail;

    doublylinkedlist(){
        head=NULL;
        tail=NULL;
    }

    void insertatend(int val){
        Node* new_node = new Node(val);

        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<endl;
    }
};


void reversedll(Node* &head, Node* &tail){
    Node* currptr = head;
    while(currptr){
        Node* nextptr = currptr->next;
        currptr->next = currptr->prev;
        currptr->prev = nextptr;
        currptr = nextptr;
    }

    //for reversing head and tail
    Node* newhead = tail;
    tail = head;
    head = newhead;

}

int main(){
    doublylinkedlist dll;
    dll.insertatend(1);
    dll.display(dll.head);
    dll.insertatend(2);
    dll.display(dll.head);
    dll.insertatend(3);
    dll.display(dll.head);
    dll.insertatend(4);
    dll.display(dll.head);
    dll.insertatend(5);
    dll.display(dll.head);
    dll.insertatend(6);
    dll.display(dll.head);

    reversedll(dll.head,dll.tail);
    dll.display(dll.head);

}