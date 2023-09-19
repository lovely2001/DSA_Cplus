//Write a program to identify people as “Child” (age < 12), “Teenager” (12 <= age < 18) or “Adult” (age >= 18).

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age of People"<<endl;
    cin>>age;

    if(age<12){
        cout<<"Child"<<endl;
    }
    else if(age>=12 && age<18){
        cout<<"Teenager"<<endl;
    }
    else{
        cout<<"Adult"<<endl;
    }
}