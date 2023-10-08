#include<stack>
#include<iostream>
using namespace std;

void removeAtbottom(stack<int> &input){
    stack<int>temp;
    while(input.size() != 1){
        int curr=input.top();
        input.pop();
        temp.push(curr);
    }
    input.pop();
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

    removeAtbottom(st);

    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }
}