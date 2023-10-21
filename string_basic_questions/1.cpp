//Given a string str, count and print the number of vowels and consonants in the string.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;

    int nvowels = 0;
    int nconsonants = 0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            nvowels++;
        }
        else{
            nconsonants++;
        }
    }

    cout<<"Number of vowels : "<<nvowels<<endl;
    cout<<"Number of consonants : "<<nconsonants<<endl;

}