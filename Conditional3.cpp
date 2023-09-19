//Print the maximum of 3 numbers a, b, c taken as input.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the Value of a : "<<endl;
    cin>>a;
    cout<<"Enter the Value of b : "<<endl;
    cin>>b;
    cout<<"Enter the Value of c : "<<endl;
    cin>>c;

    if(a>b && a>c){
        cout<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
}
