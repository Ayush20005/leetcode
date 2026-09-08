class Solution {
public:
void backtrack(
    vector<int>&path,
    vector<int>&nums,
    vector<vector<int>>&ans,
    vector<bool>&used)
{
    if(path.size()==nums.size()){
        ans.push_back(path);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(used[i])
        continue;
        used[i]=true;
        path.push_back(nums[i]);
        backtrack(path,nums,ans,used);
        path.pop_back();
        used[i]=false;

    }
}

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>path;
        vector<bool>used(nums.size(),false);
        backtrack(path,nums,ans,used);
        return ans;
        
    }
};