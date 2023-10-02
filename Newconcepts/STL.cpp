//for list

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1 = {1,2,3,4,5};
    // auto itr =l1.begin();
    // cout<<*itr<<endl;

    // auto rev_itr  = l1.rbegin();
    // cout<<*rev_itr<<endl;

    // advance(itr,2);
    // cout<<*itr<<endl;

    // advance(rev_itr,2);
    // cout<<*rev_itr<<endl;


    // //Traversal in a list 
    // cout<<"Traversall using range based loop"<<endl;
    // for(auto num: l1){
    //     cout<<num<<endl;
    // }

    // //Traversal in a list 
    // cout<<"Traversall using iterators"<<endl;
    // for(auto itr = l1.begin(); itr!=l1.end(); itr++){
    //     cout<<*itr<<endl;
    // }

    // //reverse Traversal in a list 
    // cout<<"Revrse Traversall using iterators"<<endl;
    // for(auto itr = l1.rbegin(); itr!=l1.rend(); itr++){
    //     cout<<*itr<<endl;
    // }

    // //Inserting element into a list
    // cout<<"Inserting elements into a list"<<endl;
    // auto itr1=l1.begin();
    // advance(itr1,2);
    // //l1.insert(itr1,12);
    // //l1.insert(itr1,3,12);
    // auto l = l1.begin();
    // auto r = l1.begin();
    // advance(r,2);
    // l1.insert(itr,l,r);
    // for(auto itr = l1.begin(); itr!=l1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;



    //Deletion of element
    // auto itr = l1.begin();
    // advance(itr,2);
    // for(auto itr = l1.begin(); itr!=l1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;
    // l1.erase(itr);
    // for(auto itr = l1.begin(); itr!=l1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;


    //deleting more than 1 element
    auto sitr = l1.begin();
    auto eitr = l1.begin();
    advance(eitr,2);
    for(auto itr = l1.begin(); itr!=l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    
    l1.erase(sitr,eitr);
    for(auto itr = l1.begin(); itr!=l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;

}