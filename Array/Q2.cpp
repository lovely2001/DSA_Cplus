//Find the maximum value out of all the elements in the array.
#include<iostream>
using namespace std;


int main(){
    int arr[]={6,100,14,287,23};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum value out of all elements of an array is : "<<max<<endl;
}