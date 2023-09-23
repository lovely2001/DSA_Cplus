//Search if the given element is present in the array or not and find the index. If not present then return the index as -1.
#include<iostream>
using namespace std;

int main(){
    int arr[]={6,100,14,287,23};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = -1;
    int key = 10;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            ans=i;
        }
    }
    cout<<"Key is present at an index " <<ans<<" of an array  "<<endl;
}