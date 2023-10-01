//check whether the ll is plaindrome or not

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


bool checkpalindrome(Node* head, Node* tail){
    while(head != tail && tail!=head->prev){ //check for both even and odd condition
        if(head->val != tail->val){
            return false;
        }
        head=head->next;
        tail=tail->prev;
    }
    return true;
}

int main(){
    doublylinkedlist dll;
    dll.insertatend(1);
    dll.display(dll.head);
    dll.insertatend(2);
    dll.display(dll.head);
    dll.insertatend(3);
    dll.display(dll.head);
    dll.insertatend(3);
    dll.display(dll.head);
    dll.insertatend(2);
    dll.display(dll.head);
    dll.insertatend(1);
    dll.display(dll.head);

    cout<<checkpalindrome(dll.head,dll.tail)<<endl;

}