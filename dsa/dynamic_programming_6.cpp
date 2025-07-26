#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

bool canConstruct(string target, const vector<string>& wordBank, unordered_map<string, bool>& memo) {
    if (memo.count(target)) return memo[target];
    if (target == "") return true;

    for (const string& word : wordBank) {
        if (target.find(word) == 0) {
            string suffix = target.substr(word.length());
            if (canConstruct(suffix, wordBank, memo)) {
                memo[target] = true;
                return true;
            }
        }
    }

    memo[target] = false;
    return false;
}

int main() {
    vector<string> wordBank1 = {"ab", "abc", "cd", "def", "abcd"};
    vector<string> wordBank2 = {"bo", "rd", "ate", "t", "ska", "sk", "boar"};
    vector<string> wordBank3 = {"e", "ee", "eee", "eeee", "eeeee", "eeeeee"};

    unordered_map<string, bool> memo1;
    cout << boolalpha << canConstruct("abcdef", wordBank1, memo1) << endl;  

    unordered_map<string, bool> memo2;
    cout << boolalpha << canConstruct("skateboard", wordBank2, memo2) << endl;  

    unordered_map<string, bool> memo3;
    cout << boolalpha << canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", wordBank3, memo3) << endl;  
}

