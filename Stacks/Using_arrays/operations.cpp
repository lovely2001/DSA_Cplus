#include<iostream>
using namespace std;

class stack{
    int capacity;
    int *arr;
    int top;

    public:

    stack(int c){
        this->capacity = c;
        arr = new int[c];
        top = -1;
    }

    void push(int data){
        if(this->top == this->capacity -1 ){
            cout<<"Overflow";
            return;
        }

        this->top++;
        this->arr[this->top] = data;
    }

    int pop(){
        if(this->top == -1){
            cout<<"underflow \n";
            return INT32_MIN;
        }
        int popppedlement= this->arr[this->top];
        this->top --;
        return popppedlement;
    }

    int getTop(){
        if(this->top == -1){
            cout<<"underflow \n";
            return INT32_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top == -1;
    }

    bool isFull(){
        return this->top == this->capacity - 1;
    }

    int size(){
        return this->top + 1;
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
