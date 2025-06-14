#include <iostream>
using namespace std;
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << getMax(3, 5) << endl;           // Works for int
    cout << getMax(2.5, 1.1) << endl;       // Works for float
    cout << getMax('a', 'z');    // Works for char
    return 0;
}

