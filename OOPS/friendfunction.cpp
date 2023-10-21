#include<iostream>
using namespace std;

class A {
    int x;

public:
    A(int val) {
        x = val;
    }

    // Public member function to set the value of x
    void setX(int val) {
        x = val;
    }

    // Friend function declaration
    friend void print(A &obj);
};

void print(A &obj) {
    cout << obj.x << endl;
}

int main() {
    A obj1(5);
    print(obj1); // Output: 5

    // Using the public member function to set the value of x
    obj1.setX(10);
    print(obj1); // Output: 10

    return 0;
}
