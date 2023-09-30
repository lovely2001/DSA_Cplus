#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node * new_node = new Node(val);
    new_node->next = head;
    head=new_node;
}

void display(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteatstart(Node* &head){
    Node *temp = head; //Node to be deleted
    head = head->next;
    free(temp);
}
int main(){
    Node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtHead(head,4);
    display(head);
    insertAtHead(head,3);
    display(head);
    deleteatstart(head);
    display(head);
    deleteatstart(head);
    display(head);
}