//Given the head of a dll,delete the nodes whose neighbour
//have the same value.Traverse from righ to left

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

void deletenodehavingsameneighbours(Node* &tail, Node* &head) {
    Node* curr = tail->prev;
    while (curr != head) {
        if (curr->next->val == curr->prev->val) {
            Node* temp = curr;
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            curr = curr->prev; // Move curr pointer back after deletion
            delete temp;
        } else {
            curr = curr->prev; // Move curr pointer back without deletion
        }
    }

}


int main(){
    doublylinkedlist dll;
    dll.insertatend(2);
    dll.display(dll.head);
    dll.insertatend(1);
    dll.display(dll.head);
    dll.insertatend(2);
    dll.display(dll.head);
    dll.insertatend(1);
    dll.display(dll.head);


    deletenodehavingsameneighbours(dll.tail,dll.head);
    dll.display(dll.head);

}