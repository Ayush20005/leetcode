class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        for(int i=0;i<nums.size();i++){
            for(int j=indexDifference;j<nums.size();j++){
                if (abs(nums[i]-nums[j])>=valueDifference && abs(i-j)>=indexDifference)
                return {i,j};
            }
        }
        return {-1,-1};
    }
};