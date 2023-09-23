//Given radius of a circle. Write a function to print the area and circumference of the circle.

#include<iostream>
using namespace std;

float area(float r){
    return (3.14*r*r);
}

float circumference(float r){
    return (2*3.14*r);
}

int main(){
    float radius;
    cout<<"Enter the value of radius"<<endl;
    cin>>radius;
    cout<<"Area of circle is : "<<area(radius)<<endl;
    cout<<"Circumferenceof circle is : "<<circumference(radius)<<endl;
}