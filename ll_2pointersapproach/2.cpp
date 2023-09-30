//Given the heads of two singly linked-lists headA and headB, 
//return thr node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

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

int getlength(Node* head){
    Node* ptr = head;
    int len=0;
    while(ptr != NULL){
        len++;
        ptr = ptr->next;
    }

    return len;
}

Node* movebyk(Node* head,int k){
    while(k--){
        head=head->next;
    }
    return head;
}

Node* getintersection(Node* head1, Node*head2){

    //step1 - Find the length of linked list
    int l1 = getlength(head1);
    int l2 = getlength(head2);

    //step2 - find the difference k between length of l1 and l2 and move longer ll ptr by k points
    Node* ptr1;
    Node* ptr2;
    if(l1>l2){
        int k = l1-l2;
        ptr1 = movebyk(head1,k);
        ptr2 = head2;
    }
    else{
        int k = l2-l1;
        ptr2 = movebyk(head2,k);
        ptr1=head1;
    }

    //step3 - Compare ptr1 and ptr2 nodes
    while(ptr1){
        if(ptr1 == ptr2){
            return ptr1;
    }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}

int main(){
    LinkedList ll1;
    ll1.insertatend(1);
    ll1.insertatend(2);
    ll1.insertatend(3);
    ll1.insertatend(4);
    ll1.insertatend(5);
    ll1.display();

    LinkedList ll2;
    ll2.insertatend(6);
    ll2.insertatend(7);
    // ll2.head->next->next = ll1.head->next->next->next->next;    //shows intersection
    ll2.display();


    Node* intersection =  getintersection(ll1.head,ll2.head);
    if(intersection){
        cout<<intersection->val<<endl;
    }
    else{
        cout<<"-1";
    }
}
