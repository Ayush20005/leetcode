class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Store frequencies
        for (int x : nums) {
            freq[x]++;
        }

        vector<int> ans;

        // Find lonely numbers
        for (int x : nums) {
            if (freq[x] == 1 &&
                freq.count(x - 1) == 0 &&
                freq.count(x + 1) == 0) {

                ans.push_back(x);
            }
        }

        return ans;
    }
};