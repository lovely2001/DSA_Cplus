//Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
//a pair in the array whose sum is exactly x.

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr1(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    int x;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;

    bool ans = false;
    for(int i=0;i<arr1.size();i++){
        for(int j=i+1;j<arr1.size();j++){
            if((arr1[i]+arr1[j]) == x ){
                ans = true;
                break;
            }
        }
    }

    cout<<ans;

    return 0;
}
