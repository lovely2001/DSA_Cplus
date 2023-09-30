//Given the head of a sorted ll,delete all duplicates such that
//each element appears only once.Return the sorted ll as well

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }

};

class LinkedList{
    public:
    Node *head;

    LinkedList(){
        head=NULL;
    }

    void insertatend(int value){
        Node* new_node = new Node(value);

        if(head==NULL){
            head=new_node;
            return;
        }

        else{
            Node* temp=head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next=new_node;
        }
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void deleteduplicates(Node *head){
    Node* temp = head;
    while(temp != NULL && temp->next != NULL){
        if(temp->val == temp->next->val){
            Node *delete_node = temp->next;
            temp->next=temp->next->next;
            free(delete_node);
        }
        else{
            temp=temp->next;
        }
    }
}

int main(){
    LinkedList ll;
    ll.insertatend(1);
    ll.insertatend(2);
    ll.insertatend(2);
    ll.insertatend(3);
    ll.insertatend(3);
    ll.insertatend(3);

    ll.display();

    deleteduplicates(ll.head);
    ll.display();
}