// Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any five digit number"<<endl;
    cin>>num;


    // //Approach1
    // int sum=0,i=0;
    // while(num>0){
    //     int digit=num%10;
    //     if(i==1 || i==4){
    //         sum=sum+digit;
    //     }
    //     i++;
    //     num/=10;
    // }
    // cout<<"sum of the first and the second last digit of a 5 digit number is : "<<sum;


    //Approach2

    int first,second,third,fourth;
    first=num/10000;
    num%=10000;
    second=num/1000;
    num%=1000;
    third=num/100;
    num%=100;
    fourth=num/10;
    num%=10;
    cout<<"sum of the first and the second last digit of a 5 digit number is : "<<first+fourth;
}
