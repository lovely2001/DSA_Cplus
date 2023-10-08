#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};


class stack{
    Node* head;
    int capacity;
    int currsize;

    public:

    stack(int c){
        this->capacity = c;
        this->currsize = 0;
        head = NULL;
    }

    bool isEmpty(){
        return this->head == NULL;
    }

    bool isfull(){
        return this->currsize == this->capacity;
    }

    void push(int data){
        if(this->currsize == this->capacity){
            cout<<"Overflow";
            return;
        }
        Node* newnode = new Node(data);
        newnode->next=this->head;
        this->head = newnode;
        this->currsize++;
    }

    int pop(){
        if(this->head == NULL){
            cout<<"Underflow \n";
            return INT_FAST8_MIN;
        }

        Node* new_head = this->head->next;
        Node* toberemove = this->head;
        int result = toberemove->data;
        delete toberemove;
        this->head = new_head;
        this->currsize--;
        return result;
    }

    int size(){
        return this->currsize;
    }

    int getTop(){
        if(this->head == NULL){
            cout<<"underflow \n";
            return INT16_MIN;
        }
        return this->head->data;
    }

};

int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.getTop() << endl;
    st.push(4);
    st.push(5);
    cout << st.getTop() << endl;

    st.pop(); // Remove the top element (5)
    st.push(8); // Push a new top element (8)
    cout << st.getTop() << endl; // Should print 8

    return 0;
}