#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
        cout<<"parent class"<<endl;
    }
}; 


class child: public parent{
    public:
    child(){
        cout<<"child class"<<endl;
    }
};

class grandchild: public child{
    public:
    grandchild(){
        cout<<"Grand child"<<endl;
    }
};

int main(){
    grandchild c;
}