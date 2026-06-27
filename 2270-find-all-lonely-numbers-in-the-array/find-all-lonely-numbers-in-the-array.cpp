class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        //count frequency of each element 
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            //create hashmap 
                    }
        vector<int>ans;
        //storing lonely pair 
        for(int i=0;i<n;i++){
            if(freq[nums[i]]==1 && freq[nums[i]+1]==0 && freq[nums[i]-1]==0){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};