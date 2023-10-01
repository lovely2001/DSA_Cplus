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
};

int main(){
    Node* new_node = new Node(3);
    doublylinkedlist dll;
    dll.head = new_node;
    dll.tail = new_node;
    cout<<dll.head->val<<endl;
}