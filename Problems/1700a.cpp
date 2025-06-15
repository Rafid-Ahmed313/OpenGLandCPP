#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

set<string> generatePermutations(string s) {
    set<string> permutations;
    sort(s.begin(), s.end());
    do {
        permutations.insert(s);
    } while (next_permutation(s.begin(), s.end()));
    return permutations;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string input;
        getline(cin, input);

        set<string> perms = generatePermutations(input);
        vector<string> candidates;

        for (const string& word : perms) {
            string rev = word;
            reverse(rev.begin(), rev.end());
            candidates.push_back(max(word, rev));
        }

        cout << *min_element(candidates.begin(), candidates.end()) << endl;
    }

    return 0;
}

