//Given head, the head of a lin=ed list, determine if the lin=ed list is a palindrome or not.

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

//1 - Find middle element
//2 - Separate/break linkedlist
//3 - Reverse second half of a linkedlist
//4 - Compare the 2 parts of a linkedlist

bool checkpalindrome(Node* head){

    //step1
    Node* sptr = head;
    Node* fptr = head;
    while(fptr && fptr->next){
        sptr = sptr->next;
        fptr = fptr->next->next;
    }

    // sptr - pointing the middle element
    //step2
    Node* curr = sptr->next;
    Node* pre = sptr;
    sptr->next = NULL;

    //step3
    while(curr){
        Node * nextNode = curr->next;
        curr->next = pre;
        pre=curr;
        curr = nextNode;
    }

    //step4 
    Node* head1= head;
    Node* head2  = pre;
    while(head2){
        if(head1->val != head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }

    return true;

}


int main(){
    LinkedList ll;
    ll.insertatend(1);
    ll.insertatend(3);
    ll.insertatend(3);
    ll.insertatend(1);
    ll.insertatend(4);
    ll.insertatend(2);
    ll.display();
    cout<<checkpalindrome(ll.head)<<endl;
    return 0;
}