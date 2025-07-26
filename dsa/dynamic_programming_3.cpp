#include <iostream>
#include <unordered_map>

using namespace std;

bool canSum(int target, int numbers[], int len, unordered_map<int, bool>& memo) {
    if (memo.count(target)) return memo[target]; 
    if (target == 0) return true;
    if (target < 0) return false;

    for (int i = 0; i < len; i++) {
        int remainder = target - numbers[i];
        if (canSum(remainder, numbers, len, memo)) {
            memo[target] = true; 
            return true;
        }
    }

    memo[target] = false;
    return false;
}

int main() {
    int numbers[] = {5, 3, 4, 7};
    int len = 4;
    int target = 7;

    unordered_map<int, bool> memo;

    cout << canSum(target, numbers, len, memo) << endl; 
}

