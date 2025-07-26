#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<string>> allConstruct(string target, const vector<string>& wordBank) {
    if (target == "") return {{}};

    vector<vector<string>> result;

    for (const string& word : wordBank) {
        // Check if the word is a prefix
        if (target.find(word) == 0) {
            string suffix = target.substr(word.length());
            vector<vector<string>> suffixWays = allConstruct(suffix, wordBank);

            // Prepend the current word to each way
            for (auto& way : suffixWays) {
                way.insert(way.begin(), word);
                result.push_back(way);
            }
        }
    }

    return result;
}


int main() {
    vector<string> wordBank = {"purp", "p", "ur", "le", "purpl"};
    string target = "purple";

    vector<vector<string>> result = allConstruct(target, wordBank);

    for (const auto& combination : result) {
        for (const auto& word : combination) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}

