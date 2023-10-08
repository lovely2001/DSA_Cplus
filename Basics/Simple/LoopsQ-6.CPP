//Write a program to print all Armstrong numbers between 100 to 500.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    for(int num=100;num<=500;num++){
        //to count the no of digit
        // int count=0;
        // int val=num;
        // while(val>0){
        //     val/=10;
        //     count++;
        // }
        // cout<<count<<endl;
        int ans=0;
        int val1=num;
        while(val1>0){
            int digit = val1%10;
            ans+= pow(digit,3);
            val1/=10;
        }
        if(num==ans){
            cout<<"**********"<<num<<"*****"<<endl;;
        }


    }
}