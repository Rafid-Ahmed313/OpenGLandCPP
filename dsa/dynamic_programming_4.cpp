#include <iostream>
#include <vector>

using namespace std;

vector<int>* howSum(int targetSum, const vector<int>& numbers) {
    if (targetSum == 0) return new vector<int>();
    if (targetSum < 0) return nullptr;

    for (int num : numbers) {
        int remainder = targetSum - num;
        vector<int>* remainderResult = howSum(remainder, numbers);

        if (remainderResult != nullptr) {
            remainderResult->push_back(num); 
            return remainderResult;
        }
    }

    return nullptr;
}

int main() {
    vector<int> numbers = {2, 3,5};

    vector<int>* result = howSum(7, numbers);
    if (result != nullptr) {
        for (int num : *result) {
            cout << num << " ";
        }
        delete result; 
    } else {
        cout << "null";
    }

    cout << endl;

    return 0;
}

