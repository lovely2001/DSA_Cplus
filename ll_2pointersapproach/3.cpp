//3: Given the head of a linked list, remove the k-th node from the end of the list and return its head.
//Note: It is guaranteed that k <= length of the linked list.

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

void removeknodefromthend(Node* &head,int k){
    Node *ptr1 = head;
    Node* ptr2 = head;

    //step1 -  Move ptr2 by k nodes
    while(k--){
        ptr2 = ptr2->next;
    }

    //when k = length then ptr2 will be equal  to null in this case we have to remove head
    if(ptr2 == NULL){
        Node* temp=head;
        head = head->next;
        free(temp);
        return;
    }


    //Now ptr2 is at k node now we have to traverse the ll till ptr2 reach NULL
    //because at this point ptr1 will be at k node which has to deleted

    while(ptr2->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    //now ptr1 is pointing to the node at k-1 position
    Node* temp=ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
}

int main(){
    LinkedList ll1;
    ll1.insertatend(1);
    ll1.insertatend(2);
    ll1.insertatend(3);
    ll1.insertatend(4);
    ll1.insertatend(5);
    ll1.insertatend(6);
    ll1.insertatend(7);
    ll1.display();

    removeknodefromthend(ll1.head,7);

    ll1.display();

}
