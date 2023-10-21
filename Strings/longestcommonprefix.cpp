//TC - O(nlog(n)*m) + O(min(s[0].size(),s[n-1].size()) -- m=general length of string
//SC - O(256) -- constant space

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


//approach 1
// string Longestcommonprefix(vector<string> &str){

//     //sorting the array of strings in lexographically order
//     sort(str.begin(),str.end());

//     string s1=str[0];
//     string s2=str[str.size()-1];
//     int i=0,j=0;

//     string ans="";
//     while(i<s1.size() && j<s2.size()){
//         if(s1[i]==s2[j]){
//             ans+=s1[i];
//             i++;
//             j++;
//         }
//         else{
//             break;
//         }
//     }

//     return ans;

// }

//approach 2 -- TC - O(n*m) , SC - 0(1)
string Longestcommonprefix(vector<string> &str){
    int ans_length = str[0].size();
    string cval = str[0];
    for(int i=1;i<str.size();i++){
        int j=0;
        while(j<cval.size() && j<str[i].size() && cval[j]==str[i][j]){
            j++;
        }
        ans_length=min(ans_length,j);
    }

    string ans = cval.substr(0,ans_length);
    return ans;
}

int main(){
    int n;
    cout<<"Enter number of string"<<endl;
    cin>>n;

    cout<<"Enter strings : "<<endl;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    cout<<"Longest common prefix : "<<Longestcommonprefix(str)<<endl;
}