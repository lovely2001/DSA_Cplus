//- Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array. Here 1< size <101

#include<iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int smalle=arr[0],grateste=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>grateste){
            grateste=arr[i];
        }
        if(arr[i]<smalle){
            smalle=arr[i];
        }
    }
    cout<<"sum of the greatest and the smallest integer present in the array :  "<<smalle+grateste<<endl;
}