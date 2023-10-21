//Given a string that consists of only 0s, 1s and 2s, count the number of substrings that have an equal number of 0s, 1s, and 2s.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;

    int numberofsubstring=0;
    vector<string> sub;

    //to generate all substrings
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            string temp="";
            for(int k=i;k<=j;k++){
                temp+=s[k];
            }
            sub.push_back(temp);
        }
    }

    for(int i=0;i<sub.size();i++){
        int cnt0=0;
        int cnt1=0;
        int cnt2=0;
        for(int j=0;j<sub[i].size();j++){
            if(sub[i][j]=='0'){
                cnt0++;
            }
            else if(sub[i][j]=='1'){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        if(cnt0==cnt1 && cnt1==cnt2){
            numberofsubstring++;
        }
    }

    cout<<numberofsubstring<<endl;
}