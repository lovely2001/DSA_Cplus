//Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n). 
//Find and return the only number of the range that is not present in the array. Here 1<n<101.

#include<iostream>
using namespace std;


int main(){
    int a[]={8,6,4,2,3,5,0,1};
    int n = sizeof(a)/sizeof(a[0]);
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=a[i];
    }

    int sum_f = (n*(n+1))/2;
       
    cout<<"Missing number is : "<<sum_f-sum<<endl;
}