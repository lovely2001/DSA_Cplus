// Given a string str, and a character x. Find the occurrence of character ‘x’ in the given string.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;

    char ch;
    cout<<"Enter the character to be found : "<<endl;
    cin>>ch;

    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            ans=i;
            break;
        }
    }

    cout<<ans<<endl;
}