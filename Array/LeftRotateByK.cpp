#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to reverse a subarray from index start to end
    void reverseArray(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    // Function to rotate array left or right by k steps
    vector<int> rotateArray(vector<int>& nums, int k, string direction) {
        int n = nums.size();

        // Edge case: empty or no rotation
        if (n == 0 || k == 0) return nums;

        // Normalize k
        k = k % n;

        if (direction == "right") {
            // Step 1: Reverse the whole array
            reverseArray(nums, 0, n - 1);

            // Step 2: Reverse first k elements
            reverseArray(nums, 0, k - 1);

            // Step 3: Reverse remaining n-k elements
            reverseArray(nums, k, n - 1);
        } 
        else if (direction == "left") {
            // Step 1: Reverse first k elements
            reverseArray(nums, 0, k - 1);

            // Step 2: Reverse remaining n-k elements
            reverseArray(nums, k, n - 1);

            // Step 3: Reverse the whole array
            reverseArray(nums, 0, n - 1);
        }

        return nums;
    }
};

// Driver code
int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    string dir = "right";

    vector<int> result = sol.rotateArray(nums, k, dir);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
