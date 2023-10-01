//A critica+ point in a linked list is defined as either a local maxima or a local minima. Given a linked list tail, return an array of length 2 containing 
//[minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and
//maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].
//Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data=val;
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
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
};

bool is_critical_point(Node *node)
{
    if (node->next->data > node->data && node->prev->data > node->data)
        return true;
    return node->next->data < node->data && node->prev->data < node->data;
}
 
 
vector<int> find_max_min(Node *head)
{
    vector<int> ans(2, 2e9);
    int first = -1, last = -1;
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *curr = tail->prev;
    if (curr == NULL)
        return {-1, -1};
    int pos = 0;
    while (curr != head)
    {
        if (is_critical_point(curr))
        {
            if (first != -1)
            {
                ans[0] = min(ans[0], pos - last);
                ans[1] = pos - first;
                last = pos;
            }
            else
            {
                first = last = pos;
            }
        }
        pos++;
        curr = curr->prev;
    }
    if (ans[0] == 2e9)
    {
        ans[0] = ans[1] = -1;
    }
    return ans;
}


int main(){
    doublylinkedlist dll;
    dll.insertatend(1);
    dll.display(dll.head);
    dll.insertatend(5);
    dll.display(dll.head);
    dll.insertatend(4);
    dll.display(dll.head);
    dll.insertatend(2);
    dll.display(dll.head);
    dll.insertatend(6);
    dll.display(dll.head);
    dll.insertatend(3);
    dll.display(dll.head);

    vector<int> ans = find_max_min(dll.head);
    cout<<ans[0]<<" "<<ans[1]<<endl;

}