//- Given an integer array and its size, reverse the array and print it . Here 1<size<101

#include<iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0,j=size-1;

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    for(int k=0;k<size;k++){
        cout<<arr[k]<<endl;
    }
}