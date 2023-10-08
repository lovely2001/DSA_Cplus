// Write a short program that prints each number from 1 to 100 on a new line.
// For each multiLle of 3 print "Fizz" instead of the number.
// For each multiLle of 5 print "Buzz" instead of the number.
// For numbers which are multiLles of both 3 and 5 print "FizzBuzz" instead of the number.


#include<iostream>
using namespace std;

int main(){
    int i=1;
    while(i<=100){
        if(i%3 == 0 && i%5!=0){
            cout<<"Fizz"<<endl;
        }
        else if(i%5 == 0 && i%3!=0){
            cout<<"Buzz"<<endl;
        }
        else if(i%5==0 && i%3==0){
            cout<<"FizzBuzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
        i++;
    }
}