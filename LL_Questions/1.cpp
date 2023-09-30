//Given the head of a ll, delete every alternate element from the list
//starting from the second element

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};


class LinkedList{
    public:
    Node *head;

    LinkedList(){
        head=NULL;
    }

    void insertAtTail(int value){
        Node* new_node = new Node(value);
        if(head==NULL){
            head=new_node;
            return;
        }

        Node *temp = head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=new_node;

    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;

        }
        cout<<"NULL"<<endl;
    }
};


void deletealtele(Node* head){
    Node* temp = head;
    while(temp != NULL && temp->next != NULL){
            Node* deletenode = temp->next; //Node to be deleted
            temp->next = temp->next->next;
            free(deletenode);
            temp=temp->next;
    }
}


int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);

    ll.display();

    deletealtele(ll.head);
    ll.display();

}