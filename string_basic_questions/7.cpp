//given an integer num, return the roman numeral of the integer.

#include<iostream>
#include<string>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : "<<endl;
    cin>>number;


    int normal[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};    
    string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string result; 
    for(int i=0;i<13;i++){ 
        while(number>=normal[i]){
            result.append(roman[i]);   //appending the most suitable character for a particular integer value
            number-=normal[i]; //reducing the num accordingly
        }
    }
    
    cout<<result<<endl;


}