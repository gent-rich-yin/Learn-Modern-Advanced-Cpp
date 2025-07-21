#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "Class A default constructor called" << endl;
    }
    ~A() {
        cout << "Class A deconstructor called" << endl;
    }
};

int main() {
    A a;
    A* b = new A();
    delete b;
}