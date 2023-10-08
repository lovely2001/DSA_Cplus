//Find if the input value is odd or even. If it’s odd print “Odd”, otherwise print “Even”.

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;

    if(number%2 == 0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}
