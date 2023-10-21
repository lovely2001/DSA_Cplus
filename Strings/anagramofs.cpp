//same letters used
//same count of letters
//TC - O(length of string)
//SC - O(1) -- constant space

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAnagram(string s1,string s2){
    vector<int> fre(26,0);

    if(s1.length()!=s2.length()){
        return false;
    }

    for(int i=0;i<s1.length();i++){
        fre[s1[i]-'a']++;
        fre[s2[i]-'a']--;
    }

    //checking if frequency of every characters is zero or not
    for(int i=0;i<26;i++){
        if(fre[i]!=0){
            return false;
        }
    }

    return true;
}

int main(){
    string s = "anag";
    string t = "nagaram"; 

    if(isAnagram(s,t)){
        cout<<"Strings are anagram"<<endl;
    }
    else{
        cout<<"Strings are not anagram"<<endl;
    }

}