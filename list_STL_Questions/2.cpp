//Given a linked list, print the count of no. of ‘x’ you find in the list. The list contains only lowercase english letters.

#include<iostream>
#include<list>
using namespace std;

int count_x(list<char> &l1){
    int count = 0;
    for(auto itr = l1.begin(); itr!=l1.end(); itr++){
        if(*itr == 'x'){
            count++;
        }
    }
    return count;

}

int main(){
    list<char> l1 = {'a','x','a','b','x'};
    cout<<count_x(l1)<<endl;
}