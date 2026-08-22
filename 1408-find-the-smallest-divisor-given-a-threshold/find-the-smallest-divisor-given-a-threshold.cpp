class Solution {
public:
   bool can(vector<int>& nums, int divisor, int threshold) {
    int total = 0;
    for (int num : nums) {
        total += (num + divisor - 1) / divisor;
    }
    return total <= threshold;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int left = 1;
    int right = *max_element(nums.begin(), nums.end());
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (can(nums, mid, threshold)) right = mid;
        else left = mid + 1;
    }
    return left;
}
};