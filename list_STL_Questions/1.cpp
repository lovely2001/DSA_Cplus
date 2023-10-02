//Given a linked list. Each node contains the value that is either a or b. Your task is to insert a ‘x’ before every ‘a’ in the list.

#include<iostream>
#include<list>
using namespace std;

void add_x(list<char> &l1){
    for(auto itr = l1.begin(); itr!=l1.end(); itr++){
        if(*itr == 'a'){
            l1.insert(itr,'x');
        }
    }
    return;

}

int main(){
    list<char> l1 = {'a','b','a','b','a'};
    add_x(l1);

    for(auto itr = l1.begin(); itr!=l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;
}