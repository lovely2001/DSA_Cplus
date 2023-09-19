#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"a:"<<endl;
    cin>>a;
    cout<<"b:"<<endl;
    cin>>b;
    cout<<"a : "<<a<<" b : "<<b<<endl;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"a : "<<a<<" b : "<<b;
}
