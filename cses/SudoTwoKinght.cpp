#include <iostream>
using namespace std;

// Function to compute total permutations (ordered)
long long total_permutations(int n) {
    return (long long)n * n * (n * n - 1);
}

// Function to compute total combinations (unordered)
long long total_combinations(int n) {
    return (long long)n * n * (n * n - 1) / 2;
}

// Function to compute number of attacking knight pairs
long long attacking_pairs(int n) {
    if (n < 3) return 0; // no 2x3 or 3x2 rectangles
    return 4LL * (n - 1) * (n - 2);
}

// Function to compute number of non-attacking knight pairs
long long non_attacking_combinations(int n) {
    return total_combinations(n) - attacking_pairs(n);
}

int main() {
    for (int n = 1; n <= 8; ++n) {
        cout << "Chessboard size: " << n << "x" << n << "\n";
        cout << "  Total permutations (ordered):      " << total_permutations(n) << "\n";
        cout << "  Total combinations (unordered):    " << total_combinations(n) << "\n";
        cout << "  Attacking knight pairs:            " << attacking_pairs(n) << "\n";
        cout << "  Non-attacking knight pairs:        " << non_attacking_combinations(n) << "\n";
        cout << "--------------------------------------------------\n";
    }
    return 0;
}

