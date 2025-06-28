#include <iostream>
using namespace std;

// Base class with a pure virtual function
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Virtual destructor (optional but recommended)
    virtual ~Shape() {}
};

// Derived class that overrides the pure virtual function
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle!" << endl;
    }
};

// Another derived class
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square!" << endl;
    }
};

int main() {
    // Shape is abstract and cannot be instantiated
    // Shape s; // This would cause a compile-time error
    
    // We can create pointers or references to the base class
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw();  // Output: Drawing a Circle!
    shape2->draw();  // Output: Drawing a Square!

    // Clean up
    delete shape1;
    delete shape2;

    return 0;
}

