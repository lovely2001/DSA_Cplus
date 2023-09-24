//Rotate the given array ‘a’ by k steps, where k is non-negative.
//Note: k can be greater than n as well where n is the size of array ‘a’.

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int n=v.size();
    cout<<"Enter the number of steps you want to shift : "<<endl;
    int k;
    cin>>k;
    k=k%n;
    //First approach
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int ele:v){
        cout<<ele<<endl;
   }

    

    //second approach
    // vector<int> ans_v;
    // k=k%n;  // beacuse k can be greater tha n as well
    // for(int i=(n-k);i<n;i++){
    //     ans_v.push_back(v[i]);
    // }

    // for(int i=0;i<(n-k);i++){
    //     ans_v.push_back(v[i]);
    // }

    // for(int i=0;i<n;i++){
    //     cout<<ans_v[i]<<endl;
    // }
}