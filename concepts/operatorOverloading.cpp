#include <iostream>
using namespace std

struct Point {
    int x, y;

    // Tell C++ what "point1 + point2" means:
    Point operator+(const Point& other) const {
        return { x + other.x, y + other.y };
    }
};

int main() {
    Point a{1,2}, b{3,4};
    Point c = a + b;   // now works, calls your operator+
    // c is {4,6}
}

