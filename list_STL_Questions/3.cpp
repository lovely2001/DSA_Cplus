//Given a linked list which stores only binary values i.e. 1’s and 0’s. Delete all the occurrences of 1 that appear before a 0.

#include<iostream>
#include<list>
using namespace std;

void delete_occof_1(list<int> &nums){
    auto curr = nums.begin();
    auto prev = nums.begin();
    curr++;
    while (curr != nums.end())
    {
        if (*curr == 0 && *prev == 1)
        {
            nums.erase(prev);
        }
        prev = curr;
        curr++;
    }
}

int main(){
    list<int> l1 = {1,0,0,1,1,0,1};

    delete_occof_1(l1);

    for(auto itr = l1.begin(); itr!=l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;
   
}