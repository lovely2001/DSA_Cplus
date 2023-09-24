//find the difference between the sum of elements at even indices and the sum of element at odd indices

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    int sum = 0;

    for(int ele: v){
        if(ele%2 == 0){
            sum+=ele;
        }
        else{
            sum -= ele;
        }
    }

    cout<<"difference between the sum of elements at even indices and the sum of element at odd indices is : "<<sum<<endl;
    

}