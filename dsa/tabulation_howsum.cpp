#include <iostream>
#include <vector>
#include <optional>

using namespace std;

optional<vector<int>> howSum(int targetSum, const vector<int>& numbers) {
   
    vector<optional<vector<int>>> table(targetSum + 1, nullopt);
    table[0] = vector<int>(); 
    for (int i = 0; i <= targetSum; ++i) {
        if (table[i]) {
            for (int num : numbers) {
                int next = i + num;
                if (next <= targetSum) {
                    table[next] = table[i];
                    table[next]->push_back(num);                }
            }
        }
    }

    return table[targetSum];
}



int main() {
    vector<int> numbers = {2, 3, 5};
    int target = 8;

    auto result = howSum(target, numbers);

    if (result) {
        cout << "Combination: ";
        for (int num : *result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No combination found." << endl;
    }

    return 0;
}

