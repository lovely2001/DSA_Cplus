// There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
// girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

#include<iostream>
using namespace std;

int main(){
    int total_students=45;
    int total_boys=17;

    int students_receiveAgrade=(total_students*80)/100;
    int girls_receiveAgrade= students_receiveAgrade-total_boys;
    cout<<girls_receiveAgrade<<endl;
   
}
