#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;

    int i=0;
    int j=s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

    cout<<"Reversed string : "<<s<<endl;
}