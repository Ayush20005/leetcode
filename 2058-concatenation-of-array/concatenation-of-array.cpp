class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]); //[1,2,1]
        }
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]); // will add the array again:[1,2,1,1,2,1]
        }
        return ans;
    }
};