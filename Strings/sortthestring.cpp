//will use count sort for this
//time complexity - O(length of string)
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<int> freq(26,0);
    string s="hgdter";
    int size = s.length();

    //adding frequnecy of every character
    for(int i=0;i<size;i++){
        int index = s[i]-'a';
        freq[index]++;
    }

    //to create sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            s[j++] = i+'a';
        }
    }

    cout<<s<<endl;

}