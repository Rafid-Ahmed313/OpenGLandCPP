#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() {
        name = "Unknown";
        age = 0;
    }

    Student(string n, int a) {
        name = n;
        age = a;
    }

    void print() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student students[3];

    students[0] = Student("Alice", 18);
    students[1] = Student("Bob", 19);
    students[2].name = "Charlie";
    students[2].age = 20;

    for (int i = 0; i < 3; ++i) {
        students[i].print();
    }

    return 0;
}

