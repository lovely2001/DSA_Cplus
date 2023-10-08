//Write a C++ program to take length and breadth of a rectangle and print its area.

//Take 2 integer values in two variables x and y and print their product.

#include<iostream>
using namespace std;

int main(){
    int length,breadth;
    cout<<"Enter the value of length : "<<endl;
    cin>>length;
    cout<<"Enter the value of breadth : "<<endl;
    cin>>breadth;
    int area;
    area=length*breadth;
    cout<<" Area of rectangle is : "<<area;
}
