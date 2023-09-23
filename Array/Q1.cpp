//Calculate the sum of all the elements in the given array.

#include<iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"Sum of all the elements of an array is : "<<sum<<endl;
}