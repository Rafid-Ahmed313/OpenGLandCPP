#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

int main() {
    Student students[3];

    students[0] = {"Alice", 18, 92.5};
    students[1] = {"Bob", 19, 87.0};
    students[2] = {"Charlie", 17, 78.3};

    for (int i = 0; i < 3; i++) {
        cout << "Name: " << students[i].name
             << ", Age: " << students[i].age
             << ", Grade: " << students[i].grade << endl;
    }

    return 0;
}

