class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int sum = 0;
        int ans = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (i - left + 1 == k) {
                ans = max(ans, sum);

                sum -= nums[left];
                left++;
            }
        }

        return (double)ans / k;
    }
};