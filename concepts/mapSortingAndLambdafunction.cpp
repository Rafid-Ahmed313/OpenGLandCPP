

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<pair<int,int>> v(n);
    for (auto &p : v) cin >> p.first >> p.second;

    sort(v.begin(), v.end(),
         [](const pair<int,int>& a, const pair<int,int>& b) {
             if (a.first != b.first)       // 1️⃣ primary key
                 return a.first < b.first; //    smaller x first
             return a.second > b.second;   // 2️⃣ tie-breaker (y DESC)
         });

    for (auto [x, y] : v)
        cout << x << ' ' << y << '\n';
}

