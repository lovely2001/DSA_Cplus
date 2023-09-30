//Given 2 linked lists, Tell if they are equal or not. 
//Two linked lists arr equal if they have the same
//data and the arrangrment of data is also the same.

//for this - 1- Nodes have equal values and length should also be same

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

bool checkequalll(Node *head1, Node* head2){
    Node *ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val != ptr2->val){
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return(ptr1 == NULL && ptr2==NULL);
}

int main(){
    LinkedList ll1;
    ll1.insertatend(1);
    ll1.insertatend(2);
    ll1.insertatend(3);
    ll1.display();

    LinkedList ll2;
    ll2.insertatend(1);
    ll2.insertatend(2);
    ll2.insertatend(3);
    ll2.insertatend(4);
    ll2.display();

    cout<<checkequalll(ll1.head,ll2.head);

}
