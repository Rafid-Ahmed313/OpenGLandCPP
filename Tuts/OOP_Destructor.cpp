#include <iostream>
using namespace std;

int count = 0;

class num {
public:
    num() {
        ::count++;
        cout << "This is the time when constructor is called for object number " << ::count << endl;
    }

    ~num() {
        cout << "This is the time when my destructor is called for object number " << ::count << endl;
        ::count--;
    }
}; // ✅ semicolon required here

int main() {
    cout << "We are inside our main function" << endl;

    cout << "Creating first object n1" << endl;
    num n1;

    {
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    } // n2 and n3 go out of scope here, destructors called

    cout << "Back to main" << endl;

    return 0;
}

