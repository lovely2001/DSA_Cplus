#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class circularlinkedlist
{
public:
    Node *head;

    circularlinkedlist()
    {
        head = NULL;
    }

    void insertATstart(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head; // CLL
            return;
        }

        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insertatend(int val){
        Node* new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            new_node->next = head; // CLL
            return;
        }
        Node*tail=head;

        while(tail->next != head){
            tail = tail->next;
        }

        tail->next=new_node;
        new_node->next = head;
    }

    void insertatkposition(int val,int k){
        int counter=0;
        Node* temp = head;

        Node* new_node = new Node(val);
        while(counter != (k-1)){
            temp=temp->next;
            counter++;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }

    void display()
    {
        Node *temp = head;
        do
        {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);
        cout<<endl;
    }


    void deleteatstart(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        while(temp->next != head){
            temp=temp->next;
        }

        Node* deletenode = head;
        head = head->next;
        temp->next = head;
        free(deletenode);
    }

    void deleteatend(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        while(temp->next->next != head){
            temp=temp->next;
        }
        Node* deletenode = temp->next;
        temp->next=head;
        free(deletenode);
    }

    void printcircular(){
        Node* temp = head;
        for(int i=0;i<15;i++){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<endl;
    }
};

int main()
{
    circularlinkedlist cll;
    cll.insertATstart(3);
    cll.display();
    cll.insertATstart(2);
    cll.display();
    cll.insertATstart(1);
    cll.display();
    cll.insertatend(4);
    cll.display();
    cll.insertatend(5);
    cll.display();
    cll.insertatkposition(7,2);
    cll.display();
    cll.deleteatstart();
    cll.display();
    cll.deleteatend();
    cll.display();
    cll.deleteatend();
    cll.display();


    cll.printcircular();
}