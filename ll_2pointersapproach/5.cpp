//Merging multiple linked list
//You are given an array of k linked-lists lists, each linked-list is sorted in ascending order. Merge
//all the linked-lists into one sorted linked-list and return it.

#include<iostream>
#include<vector>
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

Node *mergelll(Node *head1,Node* head2){
    Node *dummyheadnode = new Node(-1);

    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummyheadnode;
    

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val  < ptr2->val){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if(ptr1){
        ptr3->next = ptr1;
    }
    else{
        ptr3->next = ptr2;

    }

    return dummyheadnode->next;
}

Node* mergeklinkedlist(vector<Node* > &lists){
    if(lists.size() == 0){
        return NULL;
    }

    while(lists.size() > 1){
        Node* meregedhead  = mergelll(lists[0],lists[1]);
        lists.push_back(meregedhead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }

    return lists[0];
}


int main(){
    LinkedList ll1;
    LinkedList ll2;
    LinkedList ll3;
    LinkedList newlist;
    

    ll1.insertatend(1);
    ll1.insertatend(7);
    ll1.insertatend(8);
    ll1.display();

    ll2.insertatend(2);
    ll2.insertatend(4);
    ll2.insertatend(5);
    ll2.display();

    ll3.insertatend(6);
    ll3.insertatend(9);
    ll3.insertatend(10);
    ll3.display();

    vector<Node *> lists = {ll1.head,ll2.head,ll3.head};
    newlist.head = mergeklinkedlist(lists);

    newlist.display();



}
