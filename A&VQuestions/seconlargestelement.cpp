//Find the second largest value in a given array. 

#include<iostream>
using namespace std;


int largest_ele_index(int arr[],int size){
    int max = INT8_MIN;
    int maxindex = 0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main(){
    int arr[]={2,3,5,7,6,1};
    int largestelementindex = largest_ele_index(arr,6);

    arr[largestelementindex] = -1;

    int secondlargestindex = largest_ele_index(arr,6);
    cout<<arr[secondlargestindex];


}