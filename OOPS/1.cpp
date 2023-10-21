#include<iostream>
using namespace std;

class Fruit{

    public:

    string name;
    string color;


};


int main(){
    Fruit apple; //object of type fruit
    apple.name = "Apple";
    apple.color = "red";
    cout<<apple.name<<" "<<apple.color<<endl;


    //creating object using new variable(here we are creating pointer variable pointing to our object)
    Fruit *mango = new Fruit();
    mango->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<" "<<mango->color<<endl;
}