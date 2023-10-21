//Using sliding window
//TC-O(n)

#include<iostream>
#include<string>
using namespace std;

int longestOnes(string str, int k){
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;

    for( ;end<str.length();end++){
        if(str[end]=='0'){
            zero_count++;
        }

        while(zero_count>k){
            if(str[start]=='0'){
                zero_count--;
            }
            start++;   //contacting our window
        }

        //zero_count leass than k
        max_length = max(max_length,end-start+1);
    }
    return max_length;
 
}

int main(){
    string s;
    cout<<"Enter binary string : "<<endl;
    cin>>s;

    int k;
    cout<<"Enter max flips : "<<endl;
    cin>>k;

    cout<<longestOnes(s,k)<<endl;
}