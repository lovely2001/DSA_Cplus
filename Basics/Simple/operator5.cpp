//Write a program to calculate the sum of digits of a 3 digit number.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any three digit number"<<endl;
    cin>>num;

    int sum=0;
    while(num>0){
        int digit=num%10;
        sum=sum+digit;
        num/=10;
    }
    cout<<"sum of digits of a 3 digit number is : "<<sum;
}
