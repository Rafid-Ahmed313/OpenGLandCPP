#include <iostream>
using namespace std;

template <class T>
class dfvector {
public:
    T* arr;
    int size;

    dfvector(int m) {
        size = m;
        arr = new T[size];
    }

    T dotProduct(dfvector& v) {
        T d = 0;
        for (int i = 0; i < size; i++) {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main() {
    dfvector <float>v1(3);
    v1.arr[0] = 4.3;
    v1.arr[1] = 3.3;
    v1.arr[2] = 1.5;

    dfvector <float>v2(3);
    v2.arr[0] = 1.2;
    v2.arr[1] = 0.5;
    v2.arr[2] = 1.6;

    int a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}

