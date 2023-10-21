//TC-  O(Length of decoded string)
//SC - O(Length of decoded string)

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string decodestring(string str){
    //traversing the encoded string
    string result = "";
    for(int i=0;i<str.length();i++){
        if(str[i]!=']'){
            result.push_back(str[i]);
        }
        else{
            string str = "";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }

            //reversing the string
            reverse(str.begin(),str.end());

            //removing last char from ressult which is [
            result.pop_back();

            //extracting the num from result
            string num="";
            while(!result.empty() && result.back()>='0' && result.back()<='9'){
                num.push_back(result.back());
                result.pop_back();
            }

            //reversing the num string
            reverse(num.begin(),num.end());

            //convert string to integer
            int int_num = stoi(num);

            //inserting str into result int_num times
            while(int_num){
                result += str;
                int_num--;
            }
        }
    }

    return result;

    
}

int main(){
    string str;
    cin>>str;

    cout<<decodestring(str)<<endl;
}