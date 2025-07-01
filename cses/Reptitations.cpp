#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define int long long

signed main() {
    string inp;
    getline(cin, inp);

    char pr = ' ';
    int maxlen = 0;
    int count = 0;

    for (const char &c : inp) {
        if (c == pr) {
            count += 1;
        } else {
            count = 1; 
            pr = c;
        }
        if (count > maxlen) {
            maxlen = count;
        }
    }

    cout << maxlen << endl;
    return 0;
}

