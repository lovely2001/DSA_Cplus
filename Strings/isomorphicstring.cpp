//isomorphic - one to one mapping
//length should be same
//each character should map to only one character

//TC - O(length of string)
//SC - O(256) -- constant space

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isisomorphic(string s1,string s2){
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);

    if(s1.length()!=s2.length()){
        return false;
    }

    for(int i=0;i<s1.length();i++){
        if(v1[s1[i]] != v2[s2[i]]){
            return false;
        }
        v2[s2[i]]=v1[s1[i]]=i;
    }

    return true;
}

int main(){
    string s = "aabba";
    string t = "bbaab"; 

    if(isisomorphic(s,t)){
        cout<<"Strings are isomorphic"<<endl;
    }
    else{
        cout<<"Strings are not isomorphic"<<endl;
    }

}