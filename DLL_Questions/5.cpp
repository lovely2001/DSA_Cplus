//Given the head of a doubly linked list. The values of the linked list are sorted in non-decreasing
//order. Find if there exists a pair of distinct nodes such that the sum of their values is x. Return the pair in the
//form of a vector [l, r], where + and r are the va+ues stored in the 2 nodes pointed by the pointers. If there are
//multiple such pairs, return any of them. If there is no such pair return [-1, -1].

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }

};

class doublylinkedlist{
    public:
    Node* head;
    Node* tail;

    doublylinkedlist(){
        head=NULL;
        tail=NULL;
    }

    void insertatend(int val){
        Node* new_node = new Node(val);

        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<endl;
    }
};

vector<int> targetsumofdll(Node* head,Node* tail,int x){
    vector<int> ans(2,-1);
    Node *firstp = head;
    Node* lastp = tail;

    while(firstp != NULL && lastp != NULL && firstp != lastp){
        if((firstp->val + lastp->val) < x){
            firstp = firstp->next;
        }
        else if((firstp->val + lastp->val) > x){
            lastp = lastp->prev;
        }
        else{
            ans[0] = firstp->val;
            ans[1] = lastp->val;
            return ans;
        }
    }
    return ans;
}




int main(){
    doublylinkedlist dll;
    dll.insertatend(2);
    dll.display(dll.head);
    dll.insertatend(5);
    dll.display(dll.head);
    dll.insertatend(6);
    dll.display(dll.head);
    dll.insertatend(8);
    dll.display(dll.head);
    dll.insertatend(10);
    dll.display(dll.head);
    
    vector<int> ans = targetsumofdll(dll.head,dll.tail,4);
    cout<<ans[0]<<" "<<ans[1]<<endl;



}