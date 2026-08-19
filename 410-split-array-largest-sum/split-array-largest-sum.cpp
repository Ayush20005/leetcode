class Solution {
public:

    bool canSplit(vector<int>& nums, long long maxAllowedSum, int k) {
        int parts = 1;
        long long currentSum = 0;

        for (int num : nums) {

            if (currentSum + num > maxAllowedSum) {
                parts++;
                currentSum = 0;
            }

            currentSum += num;
        }

        return parts <= k;
    }

    int splitArray(vector<int>& nums, int k) {

        long long left = *max_element(nums.begin(), nums.end());

        long long right = accumulate(nums.begin(), nums.end(), 0LL);

        while (left < right) {

            long long mid = left + (right - left) / 2;

            if (canSplit(nums, mid, k)) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }

        return left;
    }
};