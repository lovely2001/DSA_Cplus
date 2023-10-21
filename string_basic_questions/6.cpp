//given a string s. Convert all lowercase letters to uppercase and vice versa and print the string.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;

    for(int i=0;i<s.size();i++){
        char ch;
        if(isupper(s[i])){
            ch =  _tolower(s[i]);
        }
        else{
           ch =  _toupper(s[i]);
        }

        s[i]=ch;
    }

    cout<<s<<endl;

}