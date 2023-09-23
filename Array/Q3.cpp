//- Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include<iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int evenn=0;

    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evenn++;
        }
    }
    cout<<"even number of element is : "<<evenn<<endl;
    cout<<"odd number of element is : "<<size-evenn<<endl;
}