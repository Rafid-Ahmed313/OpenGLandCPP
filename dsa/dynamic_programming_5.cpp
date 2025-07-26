#include <iostream>
#include <vector>

using namespace std;

vector<int>* bestSum(int targetSum, const vector<int>& numbers) {
    if (targetSum == 0) return new vector<int>();  // empty combination
    if (targetSum < 0) return nullptr;

    vector<int>* shortestCombination = nullptr;

    for (int num : numbers) {
        int remainder = targetSum - num;
        vector<int>* remainderCombination = bestSum(remainder, numbers);

        if (remainderCombination != nullptr) {
            vector<int>* combination = new vector<int>(*remainderCombination);
            combination->push_back(num);

            // If it's the first or the shortest combination found
            if (shortestCombination == nullptr || combination->size() < shortestCombination->size()) {
                if (shortestCombination != nullptr) delete shortestCombination;
                shortestCombination = combination;
            } else {
                delete combination;
            }
        }

        if (remainderCombination != nullptr) {
            delete remainderCombination;
        }
    }

    return shortestCombination;
}

