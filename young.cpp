#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l = digits.size();  // Get the size of the vector
        digits[l-1] += 1;       // Increment the last element of the vector
        return digits;
    }
};

int main() {
    Solution sol;
    vector<int> digits = {1, 2, 3};
    vector<int> result = sol.plusOne(digits);
    for (int i : result) {
        cout << i << " ";      // Print the updated vector
    }
    cout << endl;
    return 0;
}
