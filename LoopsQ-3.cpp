//Reverse the digits of a number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int value=0;
    while(n>0){
        int digit=n%10;
        value=value*10+digit;
        n=n/10;
    }
    cout<<value<<endl;


}