#include <iostream>
#include <vector>

using namespace std;

vector<int>* howSum(int targetSum, const vector<int>& numbers) {
    vector<vector<int>*> table(targetSum + 1, nullptr);
    table[0] = new vector<int>;

    for (int i = 0; i <= targetSum; i++) {
        if (table[i] != nullptr) {
            for (int num : numbers) {
                int next = i + num;
                if (next <= targetSum) {
                    if (table[next] == nullptr) {
                        table[next] = new vector<int>(*table[i]);  
                        table[next]->push_back(num);              
                    }
                }
            }
        }
    }

    
    vector<int>* result = table[targetSum];

    for (int i = 0; i <= targetSum; i++) {
        if (i != targetSum && table[i] != nullptr)
            delete table[i];
    }

    return result;
}

int main() {
    vector<int> numbers = {2, 3};
    int target = 7;

    vector<int>* result = howSum(target, numbers);

    if (result != nullptr) {
        cout << "Found combination: ";
        for (int num : *result) {
            cout << num << " ";
        }
        cout << endl;
        delete result;  
    } else {
        cout << "No combination found." << endl;
    }

    return 0;
}

