//Find the middle element of the given linked list.

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


Node * middleelementofll(Node* head){
    Node* sptr = head;
    Node* fptr = head;

    while(fptr != NULL && fptr->next !=NULL){
        fptr = fptr->next->next;
        sptr = sptr->next;
    }

    return sptr;
}

int main(){
    LinkedList ll;
    ll.insertatend(1);
    ll.insertatend(2);
    ll.insertatend(3);
    ll.insertatend(4);
    ll.insertatend(5);
    ll.display();

    Node* middle = middleelementofll(ll.head);
    cout << "Middle element: " << middle->val << endl;


}