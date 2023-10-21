#include<iostream>
using namespace std;

class Rectangle{

    public:
    int length;
    int breadth;

    Rectangle(){   //deafult - no arguments are passed
        length=0;
        breadth=0;
    }

    Rectangle(int x,int y){  //Parameterized constructor - Argumnets are passed
        length=x;
        breadth=y;
    }

    Rectangle(Rectangle& r){
      length=r.length;
      breadth=r.breadth;  
    } //Copy constructor -- when we want to intialize an object by another object


    ~Rectangle(){
        cout<<"Destructor is called"<<endl;
    }

};


int main(){
    Rectangle r1;
    cout<<r1.length<<" "<<r1.breadth<<endl;

    Rectangle r2(3,4);
    cout<<r2.length<<" "<<r2.breadth<<endl;

    Rectangle r3 = r2;
    cout<<r3.length<<" "<<r3.breadth<<endl;
}