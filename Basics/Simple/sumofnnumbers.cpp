//Print the sum of the first ‘n’ natural numbers using a while looLB where n is the input.

#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;

    int i=1,sum=0;
    while(i<=number){
        sum+=i;
        i++;
    }

    cout<<"Sum is : "<<sum<<endl;

}