class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
     int result;
    for(int i=0;i<n;i++){
        if(mp[nums[i]]==1){
            result=nums[i];
        }
    }
return result;
    }
};