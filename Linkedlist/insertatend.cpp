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


void insertatend(Node* &head, int data) {
    Node* new_node = new Node(data);
    if (head == NULL) {
        // If the list is empty, new_node becomes the head of the list
        head = new_node;
    } 
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}


void display(Node* head){
    Node* temp=head;

    while(temp != NULL){
        cout<<temp->val<< " ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

int main(){
    Node *head= NULL;
    insertatend(head,1);
    display(head);
    insertatend(head,2);
    display(head);
}
