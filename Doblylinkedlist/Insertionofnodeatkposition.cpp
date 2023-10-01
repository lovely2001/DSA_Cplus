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

    void insertatstart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head=new_node;
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

    void insertatkposiiton(int val,int k){
        Node* new_node = new Node(val);
        //k is less than or equal to length of ll
        Node* temp=head;
        int count = 1;
        while(count < (k-1)){
            temp=temp->next;
            count++;
        }

        //temp is poitning to a node at k-1 position
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev=temp;
        new_node->next->prev = new_node;
        return;

    }



    void deleteatstart(){

        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        //If dll has only 1 node
        if(head==NULL){
            tail=NULL;
        }
        else{
            head->prev=NULL;
        } 
        free(temp);
    }

    void deleteatend(){
        if(tail==NULL){
            return;
        }
        Node* temp=NULL;
        tail=tail->prev;

        //if dll has only 1 node
        if(tail==NULL){
            head=NULL;
        }
        else{
            tail->next = NULL;
        }
        free(temp);

    }

    void deletatkposition(int k){
        //assuming k is less than or equal to length of doubly ll
        Node* temp=head;
        int counter=1;
        while(counter < k){
            temp=temp->next;
            counter++;
        }

        //Now temp is poiting to node at k position
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }

    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<endl;
    }
};

int main(){
    doublylinkedlist dll;
    dll.insertatstart(3);
    dll.display(dll.head);
    dll.insertatstart(2);
    dll.display(dll.head);
    dll.insertatstart(1);
    dll.display(dll.head);
    dll.insertatend(4);
    dll.display(dll.head);
    dll.insertatkposiiton(7,3);
    dll.display(dll.head);
    dll.deleteatstart();
    dll.display(dll.head);
    dll.deleteatend();
    dll.display(dll.head);
    dll.deletatkposition(2);
    dll.display(dll.head);
}