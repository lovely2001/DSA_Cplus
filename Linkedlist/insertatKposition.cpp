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

void insertatk(Node* &head,int data,int pos){
    Node* new_node =  new Node(data);
    Node* temp = head;
    int current_pos=0;

    while(current_pos != (pos-1)){
        temp=temp->next;
        current_pos++;
    }

    new_node->next = temp->next;
    temp->next=new_node;
}

void updateatk(Node* &head,int data,int pos){
    Node* temp = head;
    int curr_pos=0;
    while(curr_pos != pos){
        temp=temp->next;
        curr_pos++;
    }

    temp->val=data;
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
    insertatend(head,3);
    display(head);
    insertatend(head,4);
    display(head);
    insertatk(head,5,2);
    display(head);
    insertatk(head,6,3);
    display(head);
    updateatk(head,9,2);
    display(head);
}
