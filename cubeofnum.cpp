//Write a C++ program to calculate the cube of a number.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number whose cube you want to be printed : "<<endl;
    cin>>number;
    cout<<"Cube of  "<<number<<" is : "<<pow(number,3)<<endl;
}
