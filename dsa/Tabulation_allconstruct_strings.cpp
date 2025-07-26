#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

vector<vector<string>> allConstruct(string target, vector<string>& wordBank, unordered_map<string, vector<vector<string>>>& memo) {
    if (memo.find(target) != memo.end()) return memo[target];
    if (target == "") return {{}};

    vector<vector<string>> result;

    for (string word : wordBank) {
        if (target.find(word) == 0) {  // word is a prefix
            string suffix = target.substr(word.length());
            vector<vector<string>> suffixWays = allConstruct(suffix, wordBank, memo);

            for (auto& way : suffixWays) {
                vector<string> targetWay = way;
                targetWay.insert(targetWay.begin(), word);
                result.push_back(targetWay);
            }
        }
    }

    memo[target] = result;
    return result;
}



int main() {
    vector<string> wordBank = {"ab", "abc", "cd", "def", "abcd", "ef", "c"};
    string target = "abcdef";

    unordered_map<string, vector<vector<string>>> memo;
    vector<vector<string>> ways = allConstruct(target, wordBank, memo);

    for (auto& way : ways) {
        for (string& word : way) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}

