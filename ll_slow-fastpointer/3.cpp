//Removing the cycle from the ll

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


bool checkcycleinll(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true; // Cycle detected
        }
    }

    return false; // No cycle found
}

//Assuming cycle is present in a ll
void removecyclefromll(Node * head){
    Node*sptr = head;
    Node*fptr = head;

    // Detect the cycle
    do{
        sptr = sptr->next;
        fptr = fptr->next;
        if (fptr == NULL || fptr->next == NULL) {
            // No cycle found, return from the function
            return;
        }
    } while(sptr != fptr);

    fptr = head;
    while(sptr->next != fptr->next){
        sptr=sptr->next;
        fptr=fptr->next;
    }
    sptr->next=NULL;

}

int main(){
    LinkedList ll;
    ll.insertatend(1);
    ll.insertatend(2);
    ll.insertatend(3);
    ll.insertatend(4);
    ll.insertatend(5);
    ll.insertatend(6);
    ll.insertatend(7);
    ll.insertatend(8);
    ll.display();

    ll.head->next->next->next->next->next->next->next->next = ll.head->next->next;
    cout << checkcycleinll(ll.head)<<endl;
    removecyclefromll(ll.head);
    cout<<"After removing cycle from ll : "<<endl;
    cout << checkcycleinll(ll.head)<<endl;

    return 0;
}