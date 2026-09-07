class Solution {
public:
          
        vector<vector<int>>result;
           void backtrack(int start,vector<int>&nums,vector<int>&path){

           

        result.push_back(path);
        for(int i=start;i<nums.size();i++)
        {
            path.push_back(nums[i]); // for pushing the next value 
            backtrack(i+1,nums,path); 
           path.pop_back();// removing the last value .

        }
    }
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<int>path;
            backtrack(0,nums,path);
            return result;
        }
};