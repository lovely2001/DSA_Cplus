#include<iostream>
using namespace std;

int main(){
    int sum=0;
    for(int i=1;i<=5;i++){
        sum+=i;
    }

    int pw=1;
    int ans=0;
    while(sum>0){
        int digit=sum%2;
        ans += digit*pw;
        pw *= 10;
        sum/=2;
    }

    cout<<ans;
}