//Given two numbers a and b, write a program using functions to print all the odd numbers between them.

#include<iostream>
using namespace std;

void oddnumber(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2 != 0){
            cout<< i;
            cout<<endl;
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"All odd numbers between "<<a<<" and "<<b<<" are "<<endl;
    oddnumber(a,b);

}