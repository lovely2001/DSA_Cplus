//Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
   int n;
   cout<<"enter the number of strings : ";
   cin>>n;
   vector<string> strings(n);
   cout<<"Enter the strings : ";
   for(int i=0;i<n;i++)cin>>strings[i];

   string word1 , word2;
   cout<<"Enter first word : ";
   cin>>word1;
    cout<<"Enter second word : ";
   cin>>word2;

    int mindistance = INT16_MAX;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(strings[i]==word1 && strings[j]==word2){
                mindistance  = min(mindistance,j-i);
            }
        }
    }

    cout<<mindistance;


}