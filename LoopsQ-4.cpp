//Find the sum of the following series
//1 - 2 + 3 - 4 ... n

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            ans-=i;
        }
        else{
            ans+=i;
        }
    }
    cout<<ans<<endl;


}