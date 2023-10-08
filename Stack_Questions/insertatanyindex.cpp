#include<stack>
#include<iostream>
using namespace std;


void insertAt(stack<int> &input, int x, int idx){
    stack<int>temp;
    int n=input.size();
    int count=0;
    while(count< n-idx){
        count++;
        int curr=input.top();
        input.pop();
        temp.push(curr);
    }
    input.push(x);
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    insertAt(st,100,2);

    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }
}