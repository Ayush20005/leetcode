class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
      
      unordered_map<int,int>mp;
      int n=nums.size();
      // arr[]=[2,7,11,15]
      for( int i=0;i<n;i++){
        int complement= target- nums[i];
        //when i=0.
        //complement=9-2=7

        if(mp.find(complement)!=mp.end())
        //but the map is empty = mp{}.

        {return{mp[complement],i};
        // return true for : {mp(2),1} when i=1; and complement=9-7=2.
        }


        mp[nums[i]]=i; // this will execute if the complement value is not found in the map.
        //{ 2:0}will be store in the map.
        
      }
      
       
       /*
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if (nums[i]+nums[j]==target){
                   return{i,j};
                }


            }
        }
        */
       return{};
    }
};