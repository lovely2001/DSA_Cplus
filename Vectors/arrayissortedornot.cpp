//check if the given array is sorted or not

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    bool ans = true;

    for(int i=1; i<v.size()-1;i++){
        if((v[i-1]>=v[i]) || (v[i+1]<=v[i])){
            ans = false;
            break;
        }
    }

    cout<<ans<<endl;


}