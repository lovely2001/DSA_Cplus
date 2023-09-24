//Find the count of element strictly greater than x

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    cout<<"Enter the element : "<<endl;
    int ele;
    cin>>ele;

    int occ = 0;

    for(int val: v){
        if(val>ele){
            occ++;
        }
    }

    cout<<"Number of element greater than x : "<<occ<<endl;
}
