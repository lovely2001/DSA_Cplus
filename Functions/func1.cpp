//Write a function to print squares of the first 5 natural numbers.


#include<iostream>
using namespace std;

int squareofnum(int n){
    return n*n;
}

int main(){
    for(int num=1;num<=5;num++){
        int value = squareofnum(num);
        cout<<value<<endl;
    }
}