#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

long long gridTraveler(int m, int n, unordered_map<string, long long>& memo) {
    int a = min(m, n);
    int b = max(m, n);
    string key = to_string(a) + "," + to_string(b);

    if (memo.count(key)) return memo[key];
    if (m == 1 && n == 1) return 1;
    if (m == 0 || n == 0) return 0;

    memo[key] = gridTraveler(m - 1, n, memo) + gridTraveler(m, n - 1, memo);
    return memo[key];
}

int main() {
    unordered_map<string, long long> memo;

    cout << gridTraveler(1, 1, memo) << endl;    
    cout << gridTraveler(2, 3, memo) << endl;    
    cout << gridTraveler(3, 2, memo) << endl;    
    cout << gridTraveler(3, 3, memo) << endl;    
}

