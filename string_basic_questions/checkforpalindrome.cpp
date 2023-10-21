#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;

    int i=0;
    int j=s.size()-1;
    int ans=0;
    while(i<j){
        if(s[i] != s[j]){
            ans = 1;
            break;
        }
        i++;
        j--;
    }

    if(ans==0){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

}