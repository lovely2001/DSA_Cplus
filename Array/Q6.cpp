//Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such that they belong to 
//different arrays and are not at the same index. Here 1<size<101

#include<iostream>
using namespace std;


int main(){
    int a[]={5,6,10,4,9};
    int b[]={0,2,3,4,5};
    int size_of_a = sizeof(a)/sizeof(a[0]);
    int size_of_b = sizeof(b)/sizeof(b[0]);

    int sum=a[0] + b[0] + 1;


    for(int i=0;i<size_of_a;i++){
        for(int j=0;j<size_of_b;j++){
            if(((a[i]+b[j])<sum ) && (i!=j)){
                sum=a[i]+b[j];
            }
        }
    }
    cout<<"minimum sum of two elements such that they belong to different arrays and are not at the same index is : "<<sum<<endl;
}