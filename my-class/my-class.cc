#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "Class A default constructor called" << endl;
    }
    // Copy constructor (deep copy)
    A(const A& other) {
        cout << "Class A copy constructor called" << endl;
    }
    ~A() {
        cout << "Class A deconstructor called" << endl;
    }
};

void f1(A a) {
    cout << "Inside f1(A a)" << endl;    
}

void f2(A& a) {
    cout << "Inside f2(A& a)" << endl;    
}

int main() {
    A a;
    A* b = new A();
    delete b;
    A c = a;
    f1(c);
    f2(c);
}